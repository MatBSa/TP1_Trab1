#ifndef STUBS_HPP_INCLUDED
#define STUBS_HPP_INCLUDED

#include "Interface.hpp"
#include <stdexcept>
#include <iostream>

using namespace std;


// classe implementa a interface.;;;

class StubSVocabulario: public ISVocabulario
{

public:

    const static int TRIGGER_SUCESSO = 111;
    const static int TRIGGER_FALHA = 222;
    const static int TRIGGER_ERRO_DE_SISTEMA = 333;


    bool incluirTermo(Termo*) throw(runtime_error);
    Termo pesquisarTermo(Nome&) throw(runtime_error);
    bool alterarTermo(Nome&, ClasseDeTermo&) throw(runtime_error);
    bool removerTermo(Nome&) throw(runtime_error);

    bool incluirDefTermo(TextoDef&, Data) throw(runtime_error);
    TextoDef pesquisarDefTermo(Nome&) throw(runtime_error);
    bool alterarDefTermo(Nome&, TextoDef&) throw(runtime_error);
    bool removerDefTermo(Nome&) throw(runtime_error);

    bool inserirVocabulario(Nome&, TextoDef&, Idioma&, Data&) throw(runtime_error);
    VocabContr pesquisarNomeVocabulario(Nome&) throw(runtime_error);
    bool alterarVocabulario(Nome&, TextoDef&, Idioma&) throw(runtime_error);
    bool removerVocabulario(Nome&) throw(runtime_error);
    TextoDef alterarDefVocabulario(Nome&, TextoDef&) throw(runtime_error);
};




#endif // INTERFACES_HPP_INCLUDED
