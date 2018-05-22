#include "Stubs.hpp"


bool StubSVocabulario ::incluirTermo(Termo *termo) throw(runtime_error)
{

    Nome nomeInserido, nomeFalha, nomeErro, nomeSucesso;
    ClasseDeTermo classeInserida, classeFalha, classeErro, classeSucesso;
    Data dataInserida, dataFalha, dataErro, dataSucesso;

    nomeFalha.setNome("Falha");
    classeFalha.setClasse("Falha na classe de termo");
    dataFalha.setData("21/05/2018");

    nomeErro.setNome("Erro");
    classeErro.setClasse("Erro na classe");
    dataErro.setData("20/05/2018");

    nomeSucesso.setNome("Sucesso");
    classeSucesso.setClasse("Sucesso na classe");
    dataSucesso.setData("22/05/2018");

    nomeInserido=termo->getNome();
    classeInserida=termo->getClasse();
    dataInserida=termo->getData();

    // Apresentar dados recebidos.

    cout << endl << "StubSVocabulario ::incluirTermo" << endl ;

    bool resultado, sucesso = 1, falha = 0;


    // Diferentes comportamentos dependendo do valor da matrícula.

    if(nomeInserido.getNome() == nomeSucesso.getNome())
    {
        resultado = TRIGGER_SUCESSO;
    }
    else
    {

        if(nomeInserido.getNome() == nomeErro.getNome())
        {
            resultado=TRIGGER_ERRO_DE_SISTEMA;
        }
        else
        {

            if(nomeInserido.getNome() == nomeFalha.getNome())
            {
                resultado = TRIGGER_FALHA;
            }
        }
    }

    if(classeInserida.getClasse() == classeSucesso.getClasse())
    {
        resultado = TRIGGER_SUCESSO;
    }
    else
    {

        if(classeInserida.getClasse() == classeErro.getClasse())
        {
            resultado=TRIGGER_ERRO_DE_SISTEMA;
        }
        else
        {

            if(classeInserida.getClasse() == classeFalha.getClasse())
            {
                resultado = TRIGGER_FALHA;
            }
        }
    }

    if(dataInserida.getData() == dataSucesso.getData())
    {
        resultado = TRIGGER_SUCESSO;
    }
    else
    {

        if(dataInserida.getData() == dataErro.getData())
        {
            resultado=TRIGGER_ERRO_DE_SISTEMA;
        }
        else
        {

            if(dataInserida.getData() == dataFalha.getData())
            {
                resultado = TRIGGER_FALHA;
            }
        }
    }



    switch (resultado)
    {

    case TRIGGER_SUCESSO:

        return(true);
        break;

    case TRIGGER_FALHA:

        return(false);
        break;

    case TRIGGER_ERRO_DE_SISTEMA:
        throw runtime_error("erro de sistema");
        break;
    }

    return(false);

}

Termo StubSVocabulario :: pesquisarTermo(Nome& nomeTermo) throw(runtime_error)
{
    Nome nomeSucesso, nomeFalha, nomeErro, nomeSet;
    ClasseDeTermo classeSucesso;
    Data dataSucesso;
    int resultado;

    nomeFalha.setNome("Circunvizinhanca");
    nomeErro.setNome("Marco");

    nomeSucesso.setNome("Computacao");
    classeSucesso.setClasse("Sucesso na classe");
    dataSucesso.setData("22/05/2018");

    Termo *termoSucesso;
    termoSucesso->setNome(nomeSucesso);
    termoSucesso->setClasse(classeSucesso);
    termoSucesso->setData(dataSucesso);

    Termo *termoFalha;
    nomeSet.setNome("Falha");
    termoFalha->setNome(nomeSet);


    if(nomeTermo.getNome() == nomeSucesso.getNome()){
            resultado = TRIGGER_SUCESSO;
    }
    if(nomeTermo.getNome() == nomeFalha.getNome()){
            resultado = TRIGGER_FALHA;
    }
    if(nomeTermo.getNome() == nomeErro.getNome()){
    resultado = TRIGGER_ERRO_DE_SISTEMA;
    }

    switch (resultado)
    {

    case TRIGGER_SUCESSO:

        return *termoSucesso;
        break;

    case TRIGGER_FALHA:

        return *termoFalha;
        break;

    case TRIGGER_ERRO_DE_SISTEMA:
        throw runtime_error("erro de sistema");
        break;
    }

    return *termoFalha;

}

bool StubSVocabulario :: alterarTermo(Nome& nomeTermo, ClasseDeTermo& classe) throw(runtime_error)
{
}
bool StubSVocabulario :: removerTermo(Nome& nomeTermo) throw(runtime_error)
{
}
