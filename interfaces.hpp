#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include <iostream>
#include "Dominios.hpp"
#include "Entidades.hpp"
#include "MACON.h"
#include "ListaUSR.h"


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
#endif // INTERFACES_H_INCLUDED
