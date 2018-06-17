#ifndef MSAUT_CPP_INCLUDED
#define MSAUT_CPP_INCLUDED

#include "Dominios.hpp"
#include "Entidades.hpp"
#include "interfaces.hpp"
#include "MAAUT.hpp"
#include "MSAUT.hpp"
#include "MACON.hpp"

bool MsAut:: autenticar(Usuario **usuario, int tipoUsr, ListaUSR **lista) throw(runtime_error)
{
    ResultadoUSR resultado;
    resultado=(*lista)->pesquisar(**usuario,tipoUsr);

    if(resultado.getResultado() == ResultadoUSR::FALHA)
    {
        return(false);
    }

    (*usuario)->usuarioL.setNome(resultado.getUsuario().usuarioL.getNome());
    cout<<"Ta igual"<<endl;
    return(true);
}
#endif
