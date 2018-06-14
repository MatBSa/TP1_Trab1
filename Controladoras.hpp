#ifndef CONTROLADORAS_HPP_INCLUDED
#define CONTROLADORAS_HPP_INCLUDED

#include "Interface.hpp"
#include "Dominios.hpp"

#include <stdexcept>
#include <iostream>
#include <cstdlib>

using namespace std;


class CntrAVocabulario : public IAVocabulario
{

private:

    //Leitor:
    const static int listarNomesVocabularios    = 1;
    const static int apresentarDadosVocabulario = 2;
    const static int consultarTermo             = 3;
    const static int consultarDefinicaoTermo    = 4;
    //Desenvolvedor:
    const static int criarTermo                 =5;
    const static int editarTermo                =6;
    const static int excluirTermo               =7;
    const static int criarDefinicaoTermo        =8;
    const static int editarDefinicaoTermo       =9;
    const static int excluirDefinicaoTermo      =10;
    //Administradores:
    const static int criarVocabularioControlado =11;
    const static int editarDefinicaoVocabulario =12;
    const static int alterarIdiomaVocabulario   =13;
    const static int excluirVocabulario         =14;

    const static int retornar                   = 5;

    ISVocabulario *cntrSVocabulario;

    public:

    // Método previsto na interface por meio do qual é solicitada execução da controladora.

    void executar(const int&) throw(runtime_error);

    // Método por meio do qual é estabelecido relacionamento com o servidor.

    void setCntrSVocabulario(ISVocabulario *cntrSVocabulario){
        this->cntrSVocabulario = cntrSVocabulario;
    }

};


#endif // CONTROLADORAS_H_INCLUDED
