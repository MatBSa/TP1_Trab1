#ifndef MAAUT_H_INCLUDED
#define MAAUT_H_INCLUDED

#include <iostream>
#include "Dominios.hpp"
#include "Entidades.hpp"
#include "interfaces.h"
#include "MACON.h"
#include "ListaUSR.h"

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
