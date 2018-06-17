#ifndef INTERFACES_HPP_INCLUDED
#define INTERFACES_HPP_INCLUDED

#include "Dominios.hpp"
#include "Entidades.hpp"
#include <stdexcept>
#include <iostream>
#include "MACON.hpp"
#include "ListaUSR.hpp"

using namespace std;


/*------------------------Interface de apresentação de autenticação------------------------------*/
class IaAut
{
public:

    virtual int logar (Usuario *, ListaUSR *) = 0;

};

/*-------------------------Interface de serviço de autenticação----------------------------------*/

class IsAut
{
public:

    virtual bool autenticar (Usuario **, int tipoUsr,ListaUSR **) throw (runtime_error) = 0;

};

/*-----------------------Interface de apresentação de gestão de usuario---------------------------*/

class IaUsr
{
public:

    //virtual void criarConta(int) = 0;
    virtual void opcoesDeUsuario(Usuario*, int *)=0;
    //virtual void deletarUsuario(Usuario*, int*);
    //virtual void editarDados(Usuario*, int*);
};

/*----------------------Interface de serviço de gestão de usuario---------------------------------*/

class IsUsr
{

 public:

  virtual void editarDados(Usuario**, int**) throw (runtime_error) =0;
  virtual void deletarUsuario(Usuario**, int**) throw (runtime_error) = 0;
  virtual void criarConta() throw (runtime_error) = 0;

};


class ISVocabulario;

/*++++++++++++++++++++++++++++++++++++++++++++++++++Interfaces de Apresentacao++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

/*--------------------------------------------Classe Interface Vocabulário controlado-----------------------------------------------------*/
class IAVocabulario
{
public:

    virtual void executar(const int) throw(runtime_error) =0;

    virtual void setCntrSVocabulario(ISVocabulario *) = 0;

    virtual ~IAVocabulario() {}

};

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++Interfaces de Servico++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

/*--------------------------------------------Classe Interface Vocabulário controlado-----------------------------------------------------*/
class ISVocabulario
{
public:

    virtual bool incluirTermo(Termo*) throw(runtime_error) = 0;
    virtual Termo pesquisarTermo(Nome&) throw(runtime_error) = 0;
    virtual bool alterarTermo(Nome&, ClasseDeTermo&) throw(runtime_error) = 0;
    virtual bool removerTermo(Nome&) throw(runtime_error) = 0;

    virtual bool incluirDefTermo(TextoDef&, Data&) throw(runtime_error) = 0;
    virtual Definicao pesquisarDefTermo(Nome&) throw(runtime_error) = 0;
    virtual bool alterarDefTermo(Nome&, TextoDef&) throw(runtime_error) = 0;
    virtual bool removerDefTermo(Nome&) throw(runtime_error) = 0;

    virtual bool inserirVocabulario(Nome&, TextoDef&, Idioma&, Data&) throw(runtime_error) = 0;
    virtual VocabContr pesquisarDadosVocabulario(Nome&) throw(runtime_error) = 0;
    virtual bool alterarDefVocabulario(Nome&, TextoDef&) throw(runtime_error) = 0;
    virtual bool trocarIdiomaVocabulario(Nome&, Idioma&) = 0;
    virtual Nome listarNomeVocabulario() throw(runtime_error) = 0;
    virtual bool removerVocabulario(Nome&) throw(runtime_error) = 0;


    virtual ~ISVocabulario(){}

};


#endif
