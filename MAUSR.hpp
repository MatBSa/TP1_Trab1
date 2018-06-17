#ifndef MAUSR_HPP_INCLUDED
#define MAUSR_HPP_INCLUDED

#include <iostream>
#include "Dominios.hpp"
#include "Entidades.hpp"
#include "Interface.hpp"
#include "MACON.hpp"


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
