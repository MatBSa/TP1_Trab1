#ifndef MAAUT_HPP_INCLUDED
#define MAAUT_HPP_INCLUDED

#include <iostream>
#include "Dominios.hpp"
#include "Entidades.hpp"
#include "Interface.hpp"
#include "MACON.hpp"
#include "ListaUSR.hpp"

using namespace std;



class MAAUT : public IaAut {

private:

    const static int ADMINISTRADOR =3;
    const static int DESENVOLVEDOR =2;
    const static int LEITOR =1;

    //Administrador *usuario;

public:

    int logar(Usuario *, ListaUSR *);

};


#endif // MAAUT_H_INCLUDED
