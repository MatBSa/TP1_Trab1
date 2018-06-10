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

 /* virtual VocabContr listarNomeVocabulario() = 0;
    virtual VocabContr apresentaDadosVocabulario() = 0;
    virtual VocabContr consultaTermo() = 0;
    virtual Definicao consultaDefTermo() = 0;

    virtual int criarTermo(const int&) = 0;
    virtual int editarTermo(const int&) = 0;
    virtual int excluirTermo(const int&) = 0;

    virtual int criarDefTermo(const int&) = 0;
    virtual int editarDefTermo(const int&) = 0;
    virtual int excluirDefTermo(const int&) = 0;

    virtual int criarVocabulario(const int&) = 0;
    virtual int editarDefVocabulario(const int&) = 0;
    virtual int alterarIdiomaVocabulario(const int&) = 0;
    virtual int excluirVocabulario(const int&) = 0;
    */

    virtual void executar(const int) throw(runtime_error) =0;

    virtual void setCntrSVocabulario(ISVocabulario *) = 0;

    virtual ~IAVocabulario() {}

};

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++Interfaces de Servico++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

/*--------------------------------------------Classe Interface Vocabulário controlado-----------------------------------------------------*/
class ISVocabulario
{
public:

    virtual bool incluirTermo(Termo*) throw(runtime_error);
    virtual Termo pesquisarTermo(Nome&) throw(runtime_error);
    virtual bool alterarTermo(Nome&, ClasseDeTermo&) throw(runtime_error);
    virtual bool removerTermo(Nome&) throw(runtime_error);

    virtual bool incluirDefTermo(TextoDef&, Data&) throw(runtime_error);
    virtual Definicao pesquisarDefTermo(Nome&) throw(runtime_error);
    virtual bool alterarDefTermo(Nome&, Definicao&) throw(runtime_error);
    virtual bool removerDefTermo(Nome&) throw(runtime_error);

    virtual bool inserirVocabulario(Nome&, TextoDef&, Idioma&, Data&) throw(runtime_error);
    virtual VocabContr pesquisarDadosVocabulario(Nome&) throw(runtime_error);
    virtual bool alterarDefVocabulario(Nome&, TextoDef&) throw(runtime_error);
    virtual bool trocarIdiomaVocabulario(Nome&, Idioma&);
    virtual Nome listNomeVocabularios() throw(runtime_error);
    virtual bool removerVocabulario(Nome&) throw(runtime_error);


    virtual ~ISVocabulario();

};


#endif // INTERFACES_H_INCLUDED
