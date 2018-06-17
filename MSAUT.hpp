#ifndef MSAUT_H_INCLUDED
#define MSAUT_H_INCLUDED

#include <iostream>
#include "Dominios.hpp"
#include "Entidades.hpp"
#include "interfaces.h"
#include "MACON.h"


class MsAut : public IsAut{


private:



public:

    const static int ADMINISTRADOR =3 ;
    const static int DESENVOLVEDOR = 2 ;
    const static int LEITOR = 1;


    bool autenticar(Usuario **, int, ListaUSR **) throw (runtime_error);

};

#endif // MSAUT_H_INCLUDED
