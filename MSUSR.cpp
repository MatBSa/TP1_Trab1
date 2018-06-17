#include <iostream>
#include "MSUSR.h"
#include "MACON.h"
#include "Dominios.hpp"
#include "Entidades.hpp"

void MsUsr::editarDados(Usuario ** usuario, int ** tipoUsr) throw (runtime_error)
{
    Nome nome;
    Sobrenome sobrenome;
    Senha senha;
    Endereco endereco;
    Data data;
    Telefone telefone;
    Email email;

    int escolha=0;
    string dado;

        if(**tipoUsr==LEITOR)
            throw runtime_error("erro de sistema");

    while(escolha != 10)
    {
        cout <<"Escolha o dado da sua conta que deseja mudar: \n"<<endl;
        cout <<"1. Nome "<<endl;
        cout <<"2. Sobrenome "<<endl;
        cout <<"3. Email "<<endl;
        cout <<"4. Senha "<<endl;
        if(**tipoUsr==LEITOR)
                cout<<"5. Sair"<<endl;
        if(**tipoUsr==ADMINISTRADOR || **tipoUsr==DESENVOLVEDOR)
        {
             cout <<"5. Data de Nascimento "<<endl;
             if(**tipoUsr==DESENVOLVEDOR)
                cout<<"6. Sair"<<endl;
        }
        if(**tipoUsr==ADMINISTRADOR)
        {
            cout <<"6. Endereço "<<endl;
            cout <<"7. Telefone "<<endl;
            cout <<"8. Sair"<<endl;
        }
            cin >> escolha;

        switch (**tipoUsr)
        {
        case ADMINISTRADOR:
            if(escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4 && escolha != 5 && escolha != 6 && escolha != 7 && escolha != 8)
                cout<<"Opção inválida, por favor escolha outra"<<endl;
            if(escolha==8)
                escolha=10;
        break;

        case DESENVOLVEDOR :
            if(escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4 && escolha != 5 && escolha != 6)
                cout<<"Opção inválida, por favor escolha outra"<<endl;
            if(escolha==6)
                escolha=10;
        break;

        case LEITOR :
            if(escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4 && escolha != 5)
                cout<<"Opção inválida, por favor escolha outra"<<endl;
            if(escolha==6)
                escolha=10;
        break;
        }
        if( escolha!=10)
        {
        cout<<"Digite o novo dado:"<<endl;
        cout<<">> ";
        cin >> dado;
        }
        try{
        switch (escolha)
        {
            case 1:
                nome.setNome(dado);
                if(**tipoUsr==ADMINISTRADOR)
                    (*usuario)->usuarioA.setNome(nome);
                if(**tipoUsr==DESENVOLVEDOR)
                    (*usuario)->usuarioD.setNome(nome);
                if(**tipoUsr==LEITOR)
                    (*usuario)->usuarioL.setNome(nome);
            break;

            case 2 :
                sobrenome.setSobreNome(dado);
                if(**tipoUsr==ADMINISTRADOR)
                    (*usuario)->usuarioA.setSobrenome(sobrenome);
                if(**tipoUsr==DESENVOLVEDOR)
                    (*usuario)->usuarioD.setSobrenome(sobrenome);
                if(**tipoUsr==LEITOR)
                    (*usuario)->usuarioL.setSobrenome(sobrenome);
            break;

            case 3 :
                email.setEmail(dado);
                if(**tipoUsr==ADMINISTRADOR)
                    (*usuario)->usuarioA.setEmail( email);
                if(**tipoUsr==DESENVOLVEDOR)
                    (*usuario)->usuarioD.setEmail( email);
                if(**tipoUsr==LEITOR)
                    (*usuario)->usuarioL.setEmail( email);
            break;

            case 4 :
                senha.setSenha(dado);
                if(**tipoUsr==ADMINISTRADOR)
                    (*usuario)->usuarioA.setSenha(senha);
                if(**tipoUsr==DESENVOLVEDOR)
                    (*usuario)->usuarioD.setSenha(senha);
                if(**tipoUsr==LEITOR)
                    (*usuario)->usuarioL.setSenha(senha);
            break;

            case 5 :
                data.setData(dado);
                if(**tipoUsr==ADMINISTRADOR)
                    (*usuario)->usuarioA.setData(data);
                if(**tipoUsr==DESENVOLVEDOR)
                    (*usuario)->usuarioD.setData(data);
            break;

            case 6 :
                endereco.setEndereco(dado);
                (*usuario)->usuarioA.setEndereco(endereco);
            break;

            case 7 :
                telefone.setTelefone(dado);
                (*usuario)->usuarioA.setTelefone(telefone);
            break;
        }
       }
       catch (invalid_argument)
       {
            cout<<"Formato de dado inválido, tente novamente"<<endl;
       }
     }
}


void MsUsr ::deletarUsuario(Usuario ** usuario, int ** tipoUsr ) throw (runtime_error)
{
    if(**tipoUsr==LEITOR)
        throw runtime_error ("erro de sistema");
    else
    {
        cout<<"Conta Excluida com sucesso"<<endl;
        *tipoUsr=0;
    }

}


void MsUsr ::criarConta() throw (runtime_error)
{

    int escolha;
    string nome;
    string sobrenome;
    string endereco;
    string email;
    string senha;
    string telefone;
    string aniversario;

    Nome nomeU;
    Sobrenome sobrenomeU;
    Endereco enderecoU;
    Email emailU;
    Senha senhaU;
    Telefone telefoneU;
    Data aniversarioU;


    cout <<"Que tipo de conta deseja criar ?"<<endl;
    while(escolha != 1 && escolha != 2 && escolha != 3)
    {
        cout<<"1.ADMINISTRADOR"<<endl;
        cout<<"2.DESENVOLVEDOR"<<endl;
        cout<<"3.LEITOR"<<endl;
        cin >> escolha;

        if(escolha != 1 && escolha != 2 && escolha != 3)
        {
            cout<<"Opação escolhida não reconhecida, por favor tente novamente"<<endl;
        }
    }
    if(escolha==1)
    {
        while(true)
        {
            try
            {
            cout<<"Por favor informe: \n"<<endl;
            cout<<"Seu nome:  ";
            cin >> nome;
            nomeU.setNome(nome);
            cout<<"\nSeu Sobrenome:  ";
            cin >> sobrenome;
            sobrenomeU.setSobreNome(sobrenome);
            cout<<"\nSeu Email:  ";
            cin >> email;
            emailU.setEmail(email);
            cout<<"\nSeu Telefone:  ";
            cin >> telefone;
            telefoneU.setTelefone(telefone);
            cout<<"\nSeu Endereço:";
            cin >> endereco;
            enderecoU.setEndereco(endereco);
            cout<<"\nSua data de Nascimento:  ";
            cin >> aniversario;
            aniversarioU.setData(aniversario);
            cout<<"\nSua Senha:  ";
            cin >> senha;
            senhaU.setSenha(senha);
            break;
            }
            catch (invalid_argument)
            {
                cout<<"Dados fornecidos de maneira invalida, tente novamente"<<endl;
            }
        }


        cout<<"Conta criada com sucesso"<<endl;
    }
    else
        throw runtime_error("erro no sistema");

}
