#ifndef MAUSR_H_INCLUDED
#define MAUSR_H_INCLUDED

#include <iostream>
#include "Dominios.hpp"
#include "Entidades.hpp"
#include "interfaces.h"
#include "MACON.h"


using namespace std;

class MaUsr : public IaUsr {

private:

    const static int ADMINISTRADOR =3;
    const static int DESENVOLVEDOR =2;
    const static int LEITOR =1;

    void mostrarDados(Usuario, int);

public:


    void opcoesDeUsuario(Usuario *, int*);

};

#endif
