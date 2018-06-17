#ifndef ENTIDADES_HPP_INCLUDED
#define ENTIDADES_HPP_INCLUDED
#include<iostream>
#include "Dominios.hpp"

using namespace std;

/*-------------------------------------------Classe Leitor----------------------------------------------------------------------*/

class Leitor /// Esta classe representa usuarios com permissao de acessar para ver
/// vocabularios controlados, termos e suas definicoes
///Objetos dessa classe armazenam dados de nome, sobrenome, Email e senha
{

private:

    Nome nome;
    Sobrenome sobrenome;
    Email email;
    Senha senha;

    bool findName(string , string );

public:

    void setNome(const Nome &nomeSet)
/// Armazena um objeto da classe de dominio Nome
/// que contem o nome do usuario
    {
        //nomeVsSenha(nomeSet,senha);
        this->nome = nomeSet;
    }

    Nome getNome()
/// retorna um objeto da classe de dominio Nome
/// que contem o nome do usuario
    {
        return (nome);
    }

    void setSobrenome(const Sobrenome &sobrenome)
/// Armazena um objeto da classe de dominio Sobrenome
/// que contem o sobrenomenome do usuario.
    {
        this->sobrenome = sobrenome;
    }

    Sobrenome getSobrenome() const
/// retorna um objeto da classe de dominio Sobreome
/// que contem o sobrenome do usuario
    {
        return (sobrenome);
    }

    void setEmail(const Email &email)
/// Armazena um objeto da classe de dominio Email
/// que contem o Email do usuario.
    {
        this->email = email;
    }

    Email getEmail()
/// retorna um objeto da classe de dominio Email
/// que contem o Email do usuario
    {
        return (email);
    }

    void setSenha(const Senha &senhaSet)
/// Armazena um objeto da classe de dominio Senha
/// que contem a Senha do usuario
    {
        nomeVsSenha(nome,senhaSet);
        this->senha = senhaSet;
    }

    Senha getSenha()
/// retorna um objeto da classe de dominio Senha
/// que contem a Senha do usuario
    {
        return (senha);
    }

    void nomeVsSenha(Nome,Senha) throw (invalid_argument);
/// Verifica se a senha escolhida contem o nome do usuario
};

/*-----------------------------------------------Classe desenvolvedor-----------------------------------------------------------*/

class Desenvolvedor: public Leitor /// Esta classe representa usuarios com permissao de acessar para ver
/// vocabularios controlados, termos e suas definicoes assim como altera-las e criar mais termos
///Essa classe herda os metodos publicos de Leitor e tambem armazena uma data de entrada do desenvolvedor
{


private:

    Data data;

public:

    void setData(const Data data)
/// Armazena um objeto que contem
/// uma data de entrada
    {
        this->data = data;
    }

    Data getData()
/// Retorna um objeto que contem
/// uma data de entrada
    {
        return (data);
    }

};


/*-------------------------------------------------Classe Administrador---------------------------------------------------------*/

class Administrador: public Desenvolvedor /// Esta classe representa usuarios com permissao de acessar para ver
/// vocabularios controlados, termos e suas definicoes assim como altera-las e criar mais termos alem de
/// criar listas de vocabulario controlado e excluir termors
///Essa classe herda os metodos publicos de Desenvolvedor e os objetos da classe tambem armazenam o telefone e enereco do usuario
{

 private:
    Telefone telefone;
    Endereco endereco;

 public:

    void setTelefone(const Telefone &telefone)
///Armazena um objeto contendo o telefone do usuario
    {
        this->telefone = telefone;
    }

    Telefone getTelefone()
///retorna um objeto contendo o telefone do usuario
    {
        return (telefone);
    }

    void setEndereco(const Endereco &endereco)
///Armazena um objeto contendo o endereco do usuario
    {
        this->endereco = endereco;
    }

    Endereco getEndereco()
///Retorna um objeto contendo o endereco do usuario
    {
        return (endereco);
    }
};


/*--------------------------------------------Classe Vocabulário controlado-----------------------------------------------------*/
class VocabContr /// Classe que representa um vocabulario controlado
/// Armazena dados de nome, idioma e data do vocabulario controlado
{

private:

    Nome nome;
    Idioma idioma;
    Data data;

public:

    void setNome (const Nome &nome)
/// Armazena um objeto da classe de dominio Nome
/// que contem o nome do vocabulario
    {
        this->nome=nome;
    }

    Nome getNome()
/// Retorna um objeto da classe de dominio Nome.
/// que contem o nome do vocabulario.
    {
        return(nome);
    }

    void setIdioma(const Idioma &idioma)
/// Armazena um objeto da classe de dominio Idioma
/// que contem o idioma do vocabulario
    {
        this->idioma=idioma;
    }

    Idioma getIdioma()
/// Retorna um objeto da classe de dominio Idioma
/// que contem o idioma do vocabulario
    {
        return(idioma);
    }

    void setData (const Data &data)
/// Armazena um objeto que contem
/// uma data de entrada
    {
        this->data=data;
    }

    Data getData()
/// Retorna um objeto que contem
/// uma data de entrada
    {
        return(data);
    }

};
/*---------------------------------------------------- Classe Termo-------------------------------------------------------------*/

class Termo /// Esta classe representa um termo na lista de vocabulos em um vocabulario controlado
/// Cada termo contem um nome, uma classe(preferido ou nao preferido) e uma data de entrada
{
private:
    Nome nome;
    ClasseDeTermo classe;
    Data data;

public:

    void setNome (const Nome &nome)
/// Armazena um objeto da classe de dominio Nome
/// que contem o nome do termo
    {
        this->nome=nome;
    }

    Nome getNome()
/// Retorna um objeto da classe de dominio Nome
/// que contem o nome do termo
    {
        return(nome);
    }

    void setClasse(const ClasseDeTermo &classe)
/// Armazena um objeto da classe de dominio Classe
/// que informa se o termo eh ou nao preferido
    {
        this->classe=classe;
    }

    ClasseDeTermo getClasse()
/// Retorna um objeto da classe de dominio Classe
/// que informa se o termo eh ou nao preferido
    {
        return(classe);
    }

    void setData (const Data &data)
/// Armazena um objeto que contem
/// uma data de entrada
    {
        this->data=data;
    }

    Data getData()
/// Retorna um objeto que contem
/// uma data de entrada
    {
        return(data);
    }

};

/*---------------------------------------------------- Classe Definiçao --------------------------------------------------------*/


class Definicao /// Esta classe representa o significado de um termo
/// E um objeto dessa classe deve ter o texto que explica o signficado e uma data de entrada do texto
{

private:
    Data data;
    TextoDef texto;
public:


    void setTexto (const TextoDef &texto)
///Armazena um objeto que contem ou texto
/// que define um termo
    {
        this->texto=texto;
    }

    TextoDef getTexto()
///Retorna um objeto que contem ou texto
/// que define um termo
    {
        return(texto);
    }

    void setData (const Data &data)
/// Armazena um objeto que contem
/// uma data de entrada
    {
        this->data=data;
    }

    Data getData()
/// Retorna um objeto que contem
/// uma data de entrada
    {
        return(data);
    }
};

#endif
