#include <iostream>
#include "Dominios.hpp"
#include "Dominios.cpp"
#include "Entidades.hpp"
#include "interfaces.h"
#include "MAAUT.h"
#include "MSAUT.cpp"
#include "MACON.h"


using namespace std;



int MAAUT :: logar(Usuario *usuario, ListaUSR *lista)
{

    Email emailLido;
    Senha senhaLida;
    Nome teste;
    Administrador usuarioS;

    string email;
    string senha;

    int tipoUsr =0;
    bool logado=false;
    bool emailVal=false;
    bool senhaVal=false;

    cout<<"Para efetuar o login, selecione o tipo de usuário, digite  o email e a senha: \n"<<endl;
    while(!logado)
    {
          while(tipoUsr!= ADMINISTRADOR && tipoUsr!= DESENVOLVEDOR && tipoUsr!= LEITOR )
          {
              cout<<"1. LEITOR"<<endl;
              cout<<"2. DESENVOLVEDor"<<endl;
              cout<<"3.ADMINISTRADOR \n"<<endl;
              cout <<">> ";
              cin >> tipoUsr;

              if(tipoUsr!= ADMINISTRADOR && tipoUsr!= DESENVOLVEDOR && tipoUsr!= LEITOR )
                    cout<<"Tipo de usuário não reconhecido, por favor selecione novamente:" <<endl;
          }

          try
          {
              if(!emailVal)
              {
                    cout<<"Email: ";
                    cin >> email;
                    cout<<email<<endl;
                    emailLido.setEmail(email);
                    emailVal=true;
              }

              if(!senhaVal)
              {
                   cout<<"Senha: ";
                   cin >> senha;
                   senhaLida.setSenha(senha);
                   senhaVal=true;
              }

          }

          catch (invalid_argument)
          {
              if(emailVal==false)
                    cout<<"Formato de email inválido, por favor tente novamente: "<<endl;

              if(senhaVal == false && emailVal==true)
                    cout << "Formato de senha inválido, por favor digite novamente: " <<endl;
          }

          if(senhaVal==true && emailVal==true)
          {
                switch (tipoUsr)
                {
                    case ADMINISTRADOR :
                        usuario->usuarioA.setEmail(emailLido);
                        usuario->usuarioA.setSenha(senhaLida);
                    case DESENVOLVEDOR :
                        usuario->usuarioD.setEmail(emailLido);
                        usuario->usuarioD.setSenha(senhaLida);
                    case LEITOR :
                        usuario->usuarioL.setEmail(emailLido);
                        usuario->usuarioL.setSenha(senhaLida);
                }
                //usuarioS.setEmail(emailLido);
                //usuarioS.setSenha(senhaLida);
                IsAut *aut = new MsAut();
                try
                {
                    logado = aut->autenticar(&usuario,tipoUsr,&lista);
                    if(logado==false )
                    {
                        tipoUsr = 0;
                        senhaVal = false;
                        emailVal = false;
                        cout<<"Usuário e/ou senha não encontrados, tente novamente."<<endl;
                    }
                }
                catch(runtime_error &exp)
                {
                    cout<<"Ocorreu um erro de sistema no acesso aos dados,";
                    cout<<"Ligue para (61) 99990-8742 se o problema insistir."<<endl;
                    tipoUsr = 0;
                    senhaVal = false;
                    emailVal = false;
                    logado =1;
                }
          }
    }

    return(tipoUsr);
}
