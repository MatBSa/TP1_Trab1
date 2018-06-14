#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "Dominios.hpp"
#include "Entidades.hpp"
#include <stdexcept>

using namespace std;

class ISVocabulario;

/*++++++++++++++++++++++++++++++++++++++++++++++++++Interfaces de Apresentacao++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

/*--------------------------------------------Classe Interface Vocabulário controlado-----------------------------------------------------*/
class IAVocabulario
{
public:

    virtual void executar(const int) throw(runtime_error) =0;

    virtual void setCntrSVocabulario(ISVocabulario *) = 0;

    virtual ~IAVocabulario() {}

};

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++Interfaces de Servico++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

/*--------------------------------------------Classe Interface Vocabulário controlado-----------------------------------------------------*/
class ISVocabulario
{
public:

    virtual bool incluirTermo(Termo*) throw(runtime_error) = 0;
    virtual Termo pesquisarTermo(Nome&) throw(runtime_error) = 0;
    virtual bool alterarTermo(Nome&, ClasseDeTermo&) throw(runtime_error) = 0;
    virtual bool removerTermo(Nome&) throw(runtime_error) = 0;

    virtual bool incluirDefTermo(TextoDef&, Data&) throw(runtime_error) = 0;
    virtual Definicao pesquisarDefTermo(Nome&) throw(runtime_error) = 0;
    virtual bool alterarDefTermo(Nome&, TextoDef&) throw(runtime_error) = 0;
    virtual bool removerDefTermo(Nome&) throw(runtime_error) = 0;

    virtual bool inserirVocabulario(Nome&, TextoDef&, Idioma&, Data&) throw(runtime_error) = 0;
    virtual VocabContr pesquisarDadosVocabulario(Nome&) throw(runtime_error) = 0;
    virtual bool alterarDefVocabulario(Nome&, TextoDef&) throw(runtime_error) = 0;
    virtual bool trocarIdiomaVocabulario(Nome&, Idioma&) = 0;
    virtual Nome listarNomeVocabulario() throw(runtime_error) = 0;
    virtual bool removerVocabulario(Nome&) throw(runtime_error) = 0;


    virtual ~ISVocabulario(){}

};


#endif // INTERFACES_H_INCLUDED
