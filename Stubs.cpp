#include "Stubs.hpp"

/*--------------------------------------------Funcao Incluir Termo------------------------------------------------------*/

bool StubSVocabulario ::incluirTermo(Termo *termo) throw(runtime_error)
{

    /*nome, classe de termo e data que ativam:
    + trigger de sucesso :
    - "Sucesso"
    - "Sucesso na classe"
    - "22/05/2018"
    + trigger falha :
    - "Falha"
    - "Falha na classe de termo"
    - "21/05/2018"
    + trigger de erro de sistema :
    - "Erro"
    - "Erro na classe"
    - "20/05/2018"
    */
    cout << endl << "StubSVocabulario ::incluirTermo" << endl ;

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

    int resultado = 0;


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

/*--------------------------------------------Funcao Pesquisar Termo----------------------------------------------------*/

Termo StubSVocabulario :: pesquisarTermo(Nome& nomeTermo) throw(runtime_error)
{

    /*nome, classe de termo e data que ativam:
    + trigger de sucesso :
    - "Computacao"
    + trigger falha :
    - "Circunvizinhanca"
    + trigger de erro de sistema :
    - "Marco"
    */

    cout << endl << "StubSVocabulario :: pesquisarTermo" << endl ;

    Nome nomeSucesso, nomeFalha, nomeErro, nomeSet;
    ClasseDeTermo classeSucesso;
    Data dataSucesso;
    int resultado;

    nomeFalha.setNome("Circunvizinhanca");
    nomeErro.setNome("Marco");

    nomeSucesso.setNome("Computacao");
    classeSucesso.setClasse("Sucesso na classe");
    dataSucesso.setData("12/04/2018");

    Termo *termoSucesso;
    termoSucesso->setNome(nomeSucesso);
    termoSucesso->setClasse(classeSucesso);
    termoSucesso->setData(dataSucesso);

    Termo *termoFalha;
    nomeSet.setNome("Falha");
    termoFalha->setNome(nomeSet);


    if(nomeTermo.getNome() == nomeSucesso.getNome())
    {
        resultado = TRIGGER_SUCESSO;
    }
    if(nomeTermo.getNome() == nomeFalha.getNome())
    {
        resultado = TRIGGER_FALHA;
    }
    if(nomeTermo.getNome() == nomeErro.getNome())
    {
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

/*--------------------------------------------Funcao Alterar Termo------------------------------------------------------*/

bool StubSVocabulario :: alterarTermo(Nome& nomeTermo, ClasseDeTermo& classe) throw(runtime_error)
{
    /*nome e classe de termo que ativam:
    + trigger de sucesso :
    - "Computacao"
    - "Sucesso na classe"
    + trigger falha :
    - "Falha"
    - "Falha na classe de termo"
    + trigger de erro de sistema :
    - "Erro"
    - "Erro na classe"
    */

    cout << endl << "StubSVocabulario :: alterarTermo" << endl ;

    int resultado = 0;

    Nome nomeFalha, nomeErro, nomeSucesso;
    ClasseDeTermo classeFalha, classeErro, classeSucesso;

    nomeFalha.setNome("Falha");
    classeFalha.setClasse("Falha na classe de termo");

    nomeErro.setNome("Erro");
    classeErro.setClasse("Erro na classe");

    nomeSucesso.setNome("Sucesso");
    classeSucesso.setClasse("Sucesso na classe");


    if(nomeTermo.getNome() == nomeErro.getNome())
    {
        resultado=TRIGGER_ERRO_DE_SISTEMA;
    }
    else
    {

        if(nomeTermo.getNome() == nomeFalha.getNome())
        {
            resultado = TRIGGER_FALHA;
        }
        else
            resultado = TRIGGER_SUCESSO;
    }



    if(classe.getClasse() == classeErro.getClasse())
    {
        resultado=TRIGGER_ERRO_DE_SISTEMA;
    }
    else
    {

        if(classe.getClasse() == classeFalha.getClasse())
        {
            resultado = TRIGGER_FALHA;
        }
        else
            resultado = TRIGGER_SUCESSO;
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

/*--------------------------------------------Funcao Remover Termo------------------------------------------------------*/

bool StubSVocabulario :: removerTermo(Nome& nomeTermo) throw(runtime_error)
{

    /*nome que ativam:
    + trigger de sucesso :
    - "Adaptador"
    - "Sucesso na classe"
    + trigger falha :
    - "Benchmark"
    + trigger de erro de sistema :
    - "Bug"
    */

    cout << endl << "StubSVocabulario :: removerTermo" << endl ;

    int resultado = 0;
    Nome nomeFalha, nomeErro, nomeSucesso;

    nomeFalha.setNome("Benchmark");
    nomeErro.setNome("Bug");
    nomeSucesso.setNome("Adaptador");

    if(nomeTermo.getNome() == nomeSucesso.getNome())
    {
        resultado = TRIGGER_SUCESSO;
    }
    else
    {

        if(nomeTermo.getNome() == nomeErro.getNome())
        {
            resultado=TRIGGER_ERRO_DE_SISTEMA;
        }
        else
        {

            if(nomeTermo.getNome() == nomeFalha.getNome())
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

/*--------------------------------------------Funcao Incluir Definicao Termo--------------------------------------------*/

bool StubSVocabulario :: incluirDefTermo(TextoDef& txtDef, Data& data) throw(runtime_error)
{

    /*classe de termo e data que ativam:
    + trigger de sucesso :
    - caso contrario
    + trigger falha :
    - "Falha no texto de definicao"
    - "01/06/2018"
    + trigger de erro de sistema :
    - "Erro no texto de definicao"
    - "30/05/2018"
    */

    cout << endl << "StubSVocabulario ::incluirDefTermo" << endl ;

    int resultado = 0;
    TextoDef txtFalha, txtErro, txtSucesso;
    Data dataFalha, dataErro, dataSucesso;

    txtFalha.setTexto("Falha no texto de definicao");
    dataFalha.setData("01/06/2018");

    txtErro.setTexto("Erro no texto de definicao");
    dataErro.setData("30/05/2018");


    if(txtDef.getTexto() == txtFalha.getTexto())
    {
        resultado = TRIGGER_FALHA;
    }
    else
    {

        if(txtDef.getTexto() == txtErro.getTexto())
        {
            resultado=TRIGGER_ERRO_DE_SISTEMA;
        }
        else
        {
            resultado = TRIGGER_SUCESSO;
        }
    }


    if(data.getData() == dataFalha.getData())
    {
        resultado = TRIGGER_FALHA;
    }
    else
    {
        if(data.getData() == dataErro.getData())
        {
            resultado = TRIGGER_ERRO_DE_SISTEMA;
        }
        else
        {
            resultado = TRIGGER_SUCESSO;
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

/*--------------------------------------------Funcao Pesquisar Definicao Termo------------------------------------------*/

Definicao StubSVocabulario :: pesquisarDefTermo(Nome& nome) throw(runtime_error)
{

    /*nome que ativam:
    + trigger de sucesso :
    - "Hardware"
    + trigger falha :
    - "Falha"
    + trigger de erro de sistema :
    - "Erro"
    */

    cout << endl << "StubSVocabulario :: pesquisarDefTermo" << endl ;

    Nome nomeSucesso, nomeFalha, nomeErro;
    TextoDef txtSucesso, txtFalha;
    Definicao *defFalha, *defSucesso;
    int resultado;

    nomeSucesso.setNome("Hardware");
    nomeFalha.setNome("Falha");
    nomeErro.setNome("Erro");

    txtFalha.setTexto("Falha no texto de definicao");
    txtSucesso.setTexto("Partes físicas de um computador");

    defFalha->setTexto(txtFalha);
    defSucesso->setTexto(txtSucesso);


    if(nome.getNome() == nomeSucesso.getNome())
    {
        resultado = TRIGGER_SUCESSO;
    }
    if(nome.getNome() == nomeFalha.getNome())
    {
        resultado = TRIGGER_FALHA;
    }
    if(nome.getNome() == nomeErro.getNome())
    {
        resultado = TRIGGER_ERRO_DE_SISTEMA;
    }

    switch (resultado)
    {

    case TRIGGER_SUCESSO:

        return *defSucesso;
        break;

    case TRIGGER_FALHA:

        return *defFalha;
        break;

    case TRIGGER_ERRO_DE_SISTEMA:
        throw runtime_error("erro de sistema");
        break;
    }

    return *defFalha;
}

/*--------------------------------------------Funcao Alterar Definicao Termo--------------------------------------------*/

bool StubSVocabulario :: alterarDefTermo(Nome& nomeTermo, TextoDef& txtDefTermo) throw(runtime_error)
{

    /*nome e texto da definicao que ativam:
    + trigger de sucesso :
    - caso nao de nenhum dos outros
    + trigger falha :
    - "Falha"
    - "Falha na definicao de termo"
    + trigger de erro de sistema :
    - "Erro"
    - "Erro na definicao de termo"
    */

    cout << endl << "StubSVocabulario :: alterarDefTermo" << endl ;

    int resultado = 0;

    TextoDef txtDefFalha, txtDefErro;
    Nome nomeFalha, nomeErro;

    nomeFalha.setNome("Falha");
    nomeErro.setNome("Erro");

    txtDefFalha.setTexto("Falha na definicao de termo");
    txtDefErro.setTexto("Erro na definicao de termo");

    if(nomeTermo.getNome() == nomeErro.getNome())
    {
        resultado=TRIGGER_ERRO_DE_SISTEMA;
    }
    else
    {

        if(nomeTermo.getNome() == nomeFalha.getNome())
        {
            resultado = TRIGGER_FALHA;
        }
        else
            resultado = TRIGGER_SUCESSO;
    }



    if(txtDefTermo.getTexto() == txtDefErro.getTexto())
    {
        resultado=TRIGGER_ERRO_DE_SISTEMA;
    }
    else
    {

        if(txtDefTermo.getTexto() == txtDefFalha.getTexto())
        {
            resultado = TRIGGER_FALHA;
        }
        else
            resultado = TRIGGER_SUCESSO;
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

/*--------------------------------------------Funcao Remover Definicao Termo--------------------------------------------*/

bool StubSVocabulario :: removerDefTermo(Nome& nomeTermo) throw(runtime_error)
{

    /*nome que ativam:
    + trigger de sucesso :
    - caso nao de nenhum dos outros
    + trigger falha :
    - "Disquete"
    + trigger de erro de sistema :
    - "Crash"
    */

    cout << endl << "StubSVocabulario :: removerDefTermo" << endl ;

    int resultado = 0;
    Nome nomeFalha, nomeErro;

    nomeFalha.setNome("Disquete");
    nomeErro.setNome("Crash");

    if(nomeTermo.getNome() == nomeErro.getNome())
    {
        resultado = TRIGGER_ERRO_DE_SISTEMA;
    }
    else
    {

        if(nomeTermo.getNome() == nomeFalha.getNome())
        {
            resultado = TRIGGER_FALHA;
        }
        else
        {
            resultado = TRIGGER_SUCESSO;
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



/*--------------------------------------------Funcao Inserir Vocabulario------------------------------------------------*/

bool StubSVocabulario :: inserirVocabulario(Nome& nomeVocab, TextoDef& txtDef, Idioma& idiomaVocab, Data& dataVocab) throw(runtime_error)
{

    /*nome, texto da definicao, idioma e data que ativam:
    + trigger de sucesso :
    - caso nao de nenhum dos outros
    + trigger falha :
    - "Backup"
    - "Copia de seguranca dos dados"
    - "SPA"
    - "25/12/2002"
    + trigger de erro de sistema :
    - "Crack"
    - "Erro na classe"
    - "SPA"
    - "01/01/2001"
    */

    cout << endl << "StubSVocabulario :: inserirVocabulario" << endl ;

    int resultado = 0;

    Nome nomeFalha, nomeErro, nomeSucesso;
    TextoDef txtFalha, txtErro;
    Idioma idiomaFalha, idiomaErro;
    Data dataFalha, dataErro;

    nomeFalha.setNome("Backup");
    txtFalha.setTexto("Copia de seguranca dos dados");
    idiomaFalha.setIdioma("SPA");
    dataFalha.setData("25/12/2002");

    nomeErro.setNome("Crack");
    txtErro.setTexto("Erro na classe");
    idiomaErro.setIdioma("SPA");
    dataErro.setData("01/01/2001");

    if(nomeVocab.getNome() == nomeFalha.getNome())
    {
        resultado = TRIGGER_FALHA;
    }
    else
    {

        if(nomeVocab.getNome() == nomeErro.getNome())
        {
            resultado=TRIGGER_ERRO_DE_SISTEMA;
        }
        else
        {

            resultado = TRIGGER_SUCESSO;
        }
    }

    if(txtDef.getTexto() == txtFalha.getTexto())
    {
        resultado = TRIGGER_FALHA;
    }
    else
    {

        if(txtDef.getTexto() == txtErro.getTexto())
        {
            resultado=TRIGGER_ERRO_DE_SISTEMA;
        }
        else
        {

            resultado = TRIGGER_SUCESSO;
        }
    }

    if(idiomaVocab.getIdioma() == idiomaFalha.getIdioma())
    {
        resultado = TRIGGER_FALHA;
    }
    else
    {

        if(idiomaVocab.getIdioma() == idiomaErro.getIdioma())
        {
            resultado=TRIGGER_ERRO_DE_SISTEMA;
        }
        else
        {

            resultado = TRIGGER_SUCESSO;
        }
    }

    if(dataVocab.getData() == dataFalha.getData())
    {
        resultado = TRIGGER_FALHA;
    }
    else
    {

        if(dataVocab.getData() == dataErro.getData())
        {
            resultado=TRIGGER_ERRO_DE_SISTEMA;
        }
        else
        {

            resultado = TRIGGER_SUCESSO;
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

/*--------------------------------------------Funcao Pesquisar Nome Vocabulario-----------------------------------------*/

Nome StubSVocabulario :: listarNomeVocabulario() throw(runtime_error)
{

    cout << endl << "StubSVocabulario :: listarNomeVocabulario" << endl ;

    Nome nomeSucesso;

    nomeSucesso.setNome("Database");

    return nomeSucesso;
}

/*--------------------------------------------Funcao Alterar Definicao Vocabulario--------------------------------------*/

bool StubSVocabulario :: alterarDefVocabulario(Nome& nomeVocab, TextoDef& txtDefVocab) throw(runtime_error)
{

    /*nome e texto da definicao que ativam:
    + trigger de sucesso :
    - caso nao de nenhum dos outros
    + trigger falha :
    - "Bug"
    - "Falha na alteracao de vocabulario"
    + trigger de erro de sistema :
    - "Erro"
    - "Erro na alteracao de vocabulario"
    */

    cout << endl << "StubSVocabulario :: alterarDefVocabulario" << endl ;

    int resultado = 0;

    Nome nomeFalha, nomeErro;
    TextoDef txtDefFalha, txtDefErro;

    nomeFalha.setNome("Bug");
    nomeErro.setNome("Erro");

    txtDefFalha.setTexto("Falha na alteracao de vocabulario");
    txtDefErro.setTexto("Erro na alteracao de vocabulario");


    if(nomeVocab.getNome() == nomeErro.getNome())
    {
        resultado=TRIGGER_ERRO_DE_SISTEMA;
    }
    else
    {

        if(nomeVocab.getNome() == nomeFalha.getNome())
        {
            resultado = TRIGGER_FALHA;
        }
        else
            resultado = TRIGGER_SUCESSO;
    }



    if(txtDefVocab.getTexto() == txtDefErro.getTexto())
    {
        resultado = TRIGGER_ERRO_DE_SISTEMA;
    }
    else
    {

        if(txtDefVocab.getTexto() == txtDefFalha.getTexto())
        {
            resultado = TRIGGER_FALHA;
        }
        else
            resultado = TRIGGER_SUCESSO;
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

/*--------------------------------------------Funcao Remover Vocabulario------------------------------------------------*/

bool StubSVocabulario :: removerVocabulario(Nome& nomeVocab) throw(runtime_error)
{

    /*nome que ativam:
    + trigger de sucesso :
    - caso nao de nenhum dos outros sejam ativos
    + trigger falha :
    - "Benchmark"
    + trigger de erro de sistema :
    - "Bug"
    */

    cout << endl << "StubSVocabulario :: removerVocabulario" << endl ;

    int resultado = 0;
    Nome nomeFalha, nomeErro;

    nomeFalha.setNome("Benchmark");
    nomeErro.setNome("Bug");

    if(nomeVocab.getNome() == nomeFalha.getNome())
    {
        resultado = TRIGGER_FALHA;
    }
    else
    {

        if(nomeVocab.getNome() == nomeErro.getNome())
        {
            resultado=TRIGGER_ERRO_DE_SISTEMA;
        }
        else
        {

            resultado = TRIGGER_SUCESSO;
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

/*--------------------------------------------Funcao Pesquisar Dados Vocabulario----------------------------------------*/

VocabContr StubSVocabulario :: pesquisarDadosVocabulario(Nome& nomeVocab) throw(runtime_error){

    /*nome que ativam:
    + trigger de sucesso :
    - "Fonte"
    + trigger falha :
    - "Layout"
    + trigger de erro de sistema :
    - "Load"
    */

    cout << endl << "StubSVocabulario :: pesquisarDadosVocabulario" << endl ;

    Nome nomeSucesso, nomeFalha, nomeErro;
    Idioma idiomaSucesso;
    Data dataSucesso;
    int resultado;

    nomeFalha.setNome("Layout");
    nomeErro.setNome("Load");

    nomeSucesso.setNome("Fonte");
    idiomaSucesso.setIdioma("Por");
    dataSucesso.setData("18/03/1998");

    VocabContr *vocabSucesso;
    vocabSucesso->setNome(nomeSucesso);
    vocabSucesso->setIdioma(idiomaSucesso);
    vocabSucesso->setData(dataSucesso);

    VocabContr *vocabFalha;
    vocabFalha->setNome(nomeFalha);


    if(nomeVocab.getNome() == nomeSucesso.getNome())
    {
        resultado = TRIGGER_SUCESSO;
    }
    if(nomeVocab.getNome() == nomeFalha.getNome())
    {
        resultado = TRIGGER_FALHA;
    }
    if(nomeVocab.getNome() == nomeErro.getNome())
    {
        resultado = TRIGGER_ERRO_DE_SISTEMA;
    }

    switch (resultado)
    {

    case TRIGGER_SUCESSO:

        return *vocabSucesso;
        break;

    case TRIGGER_FALHA:

        return *vocabFalha;
        break;

    case TRIGGER_ERRO_DE_SISTEMA:
        throw runtime_error("erro de sistema");
        break;
    }

    return *vocabFalha;
}

/*--------------------------------------------Funcao Trocar Idioma Vocabulario------------------------------------------*/

bool StubSVocabulario :: trocarIdiomaVocabulario(Nome& nomeVocab, Idioma& idiomaVocab){

    /*nome e idioma que ativam:
    + trigger de sucesso :
    - caso nao de nenhum dos outros
    + trigger falha :
    - "Sistema"
    - "SPA"
    + trigger de erro de sistema :
    - "Tela"
    - "SPA"
    */

    cout << endl << "StubSVocabulario :: trocarIdiomaVocabulario" << endl ;

    int resultado = 0;

    Nome nomeFalha, nomeErro;
    Idioma idiomaFalha, idiomaErro;

    nomeFalha.setNome("Sistema");
    nomeErro.setNome("Tela");

    idiomaFalha.setIdioma("SPA");
    idiomaErro.setIdioma("SPA");


    if(nomeVocab.getNome() == nomeErro.getNome())
    {
        resultado=TRIGGER_ERRO_DE_SISTEMA;
    }
    else
    {

        if(nomeVocab.getNome() == nomeFalha.getNome())
        {
            resultado = TRIGGER_FALHA;
        }
        else
            resultado = TRIGGER_SUCESSO;
    }



    if(idiomaVocab.getIdioma() == idiomaErro.getIdioma())
    {
        resultado = TRIGGER_ERRO_DE_SISTEMA;
    }
    else
    {

        if(idiomaVocab.getIdioma() == idiomaFalha.getIdioma())
        {
            resultado = TRIGGER_FALHA;
        }
        else
            resultado = TRIGGER_SUCESSO;
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
