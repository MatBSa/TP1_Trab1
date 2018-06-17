#ifndef MACON_H_INCLUDED
#define MACON_H_INCLUDED

#include "Dominios.hpp"
#include "Entidades.hpp"

class Usuario
{

public:

    Leitor usuarioL;
    Desenvolvedor usuarioD;
    Administrador usuarioA;

};

class MaCon
{
private:

    const static int ADMINISTRADOR = 3;
    const static int DESENVOLVEDOR = 2;
    const static int LEITOR = 1;

    Usuario usuario;

public:

    void menuEscolha();

};

#endif // MACON_H_INCLUDED
