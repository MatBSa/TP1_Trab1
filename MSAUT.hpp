#ifndef MSAUT_HPP_INCLUDED
#define MSAUT_HPP_INCLUDED

#include <iostream>
#include "Dominios.hpp"
#include "Entidades.hpp"
#include "interfaces.hpp"
#include "MACON.hpp"


class MsAut : public IsAut{


private:



public:

    const static int ADMINISTRADOR =3 ;
    const static int DESENVOLVEDOR = 2 ;
    const static int LEITOR = 1;


    bool autenticar(Usuario **, int, ListaUSR **) throw (runtime_error);

};

#endif // MSAUT_H_INCLUDED
