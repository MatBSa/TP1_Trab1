#ifndef LISTAUSR_H_INCLUDED
#define LISTAUSR_H_INCLUDED
#include<list>
#include "MACON.h"

using namespace std;

class ResultadoUSR
{
private:

    Usuario usuario;

protected:

    int resultado;

public:
    const static int SUCESSO = 0;
    const static int FALHA   = 1;

    void setResultado(int resultado){
        this->resultado = resultado;
    }

    int getResultado() const {
        return resultado;
    }

     void setUsuario(const Usuario &usuario){
        this->usuario = usuario;
    }

    Usuario getUsuario() const {
        return usuario;
    }
};

class ListaUSR
{

private:

    list<Usuario> lista;

public:

    const static int ADMINISTRADOR =3;
    const static int DESENVOLVEDOR =2;
    const static int LEITOR =1;

    ResultadoUSR pesquisar(Usuario, int);
    ResultadoUSR incluir(Usuario, int);
};

#endif // LISTAUSR_H_INCLUDED
