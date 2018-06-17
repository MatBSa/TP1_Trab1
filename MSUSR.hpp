#ifndef MSUSR_H_INCLUDED
#define MSUSR_H_INCLUDED

#include "MACON.h"
#include "Dominios.hpp"
#include "Entidades.hpp"
#include "interfaces.h"

class MsUsr : public IsUsr
{
private:

    const static int ADMINISTRADOR =3;
    const static int DESENVOLVEDOR =2;
    const static int LEITOR =1;

public:

    void editarDados(Usuario**, int**) throw (runtime_error);
    void deletarUsuario(Usuario**, int**) throw (runtime_error);
    void criarConta() throw (runtime_error);

};

#endif // MSUSR_H_INCLUDED
