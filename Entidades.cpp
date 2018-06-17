#include "Entidades.hpp"

#include<iostream>



void Leitor::nomeVsSenha(Nome nome,Senha senha) throw (invalid_argument)
{
    bool nomeNaSenha;

    string name = nome.getNome();
    string password = senha.getSenha();
    nomeNaSenha = findName(password,name);


    if(nomeNaSenha==true)
    {
        throw invalid_argument("\nA senha contém o nome\n");

    }
}

 //Esse método tem que sair daqui e ir para as entidades de usuário.
 bool Leitor::findName(string senha, string nomeS){

     const int tamNome = 20;
     const int tamSenha = 8;
     cout<<senha<<endl;
     //cout<<nomeS<<endl;
     char compara[tamNome];
     int i=0,j=0;

     for(i=0;i<8;i++)
     {
     if(senha[i] == nomeS[0])                //Se alguma letra da senha é igual à primeira letra do nome
         {                                   //As próximas letras em sequência são comparaas, até ser encontrada uma diferença
                                             //Ou até todos os demais caracteres terem sido comparados em sequência
             while(senha[i+j] == nomeS[j] || i+j <tamSenha){
                 compara[j]= nomeS[j];       // Os caracteres iguais são armazenaos
                 j=j+1;

             }
             if(compara==nomeS) // Se o conjunto de caracteres iguais em sequência conseguir formar o nome
                 return(true);  // Significa que a senha contém o nome.
             else
                 j=0;
         }
     }
     return (false);
 }
