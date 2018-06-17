#include <iostream>
#include "Dominios.hpp"
#include "Entidades.hpp"
#include "Interface.hpp"
#include "MAUSR.hpp"
#include "MACON.hpp"
#include "MSUSR.hpp"


using namespace std;

void MaUsr:: opcoesDeUsuario(Usuario *usuario, int *tipoUsr)
{
    int escolha=0;
    MaUsr dados;
    IsUsr *conta = new MsUsr();

    cout<<"Escolha a ação que deseja realizar sobre sua conta: \n"<<endl;

    while(escolha !=5)
    {
        cout<<"1.Criar Conta"<<endl;
        cout<<"2.Mostrar Dados"<<endl;
        cout<<"3.Editar Dados"<<endl;
        cout<<"4.Excluir conta"<<endl;
        cout<<"5.Volar ao menu inicial"<<endl;
        cout<<">>"<<endl;
        cin>> escolha;

        if(escolha!= 1 && escolha!= 2 && escolha!= 3 && escolha!= 4 && escolha!= 5)
        {
            cout<<"Opção escolhida não reconhecida, por favor tente novmente"<<endl;
        }

        switch (escolha)
        {

        case 1:
                cout<<"1.Criar Conta"<<endl;
                conta->criarConta();
            break;

        case 2:
                dados.mostrarDados(*usuario,*tipoUsr);
            break;

        case 3:
            try
            {
                conta->editarDados(&usuario,&tipoUsr);
            }
            catch (runtime_error &exp)
            {
                cout<<"Ocorreu um erro, por favor, tente novamente mais tardde"<<endl;
                escolha=5;
            }

            break;

        case 4:
            try
            {
                conta->deletarUsuario(&usuario,&tipoUsr);
                escolha=5;
            }
            catch (runtime_error &exp)
            {
                cout<<"Ocorreu um erro, por favor, tente novamente mais tardde"<<endl;
                escolha=5;
            }
            break;
        }
    }
}

void MaUsr:: mostrarDados(Usuario usuario, int tipoUsr)
{
    Nome nome;
    Sobrenome sobrenome;
    Endereco endereco;
    Data data;
    Telefone telefone;
    Email email;

    cout<<"Dados de usuário:"<<endl;
    switch(tipoUsr)
    {
    case ADMINISTRADOR:

            nome = usuario.usuarioA.getNome();
            sobrenome = usuario.usuarioA.getSobrenome();
            endereco = usuario.usuarioA.getEndereco();
            data = usuario.usuarioA.getData();
            telefone = usuario.usuarioA.getTelefone();
            email = usuario.usuarioA.getEmail();

            cout<<"Nome: "<<nome.getNome()<<endl;
            cout<<"Sobrenome: "<<sobrenome.getSobreNome()<<endl;
            cout<<"Endereço: "<< endereco.getEndereco() <<endl;
            cout<<"Data de Nscimento: "<< data.getData()<<endl;
            cout<<"Telefone: "<< telefone.getTelefone()<<endl;
            cout<<"Email: "<<email.getEmail()<<endl;

        break;

    case DESENVOLVEDOR:

            nome = usuario.usuarioD.getNome();
            sobrenome = usuario.usuarioD.getSobrenome();
            data = usuario.usuarioD.getData();
            email = usuario.usuarioD.getEmail();

            cout<<"Nome: "<<nome.getNome()<<endl;
            cout<<"Sobrenome: "<<sobrenome.getSobreNome()<<endl;
            cout<<"Data de Nscimento: "<< data.getData()<<endl;
            cout<<"Email: "<<email.getEmail()<<endl;

        break;

    case LEITOR:

            nome = usuario.usuarioL.getNome();
            sobrenome = usuario.usuarioL.getSobrenome();
            email = usuario.usuarioL.getEmail();

            cout<<"Nome: "<<nome.getNome()<<endl;
            cout<<"Sobrenome: "<<sobrenome.getSobreNome()<<endl;
            cout<<"Email: "<<email.getEmail()<<endl;

        break;
    }

}

