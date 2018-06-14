#include "Comandos.hpp"


// Método por meio do qual é solicitada a execução do comando.

void ComandoIAVocabularioLisNomesVoc::executar(ISVocabulario* cntrSVocabulario) throw(runtime_error)
{

    Nome nomeVocab;

    nomeVocab = cntrSVocabulario->listarNomeVocabulario();

    if(nomeVocab.getNome() == "Falha")
    {
        cout << "Falha na execucao da operacao" << endl;
    }
    cout << "Os vocabularios e/sao:\n"<< nomeVocab.getNome() << endl;

}

void ComandoIAVocabularioAprDadosVoc::executar(ISVocabulario* cntrSVocabulario) throw(runtime_error)
{

    VocabContr resultado;
    Nome nomeVocab, nomeFalha, nomeRecebido;
    Idioma idiomaRecebido;
    Data dataRecebida;

    nomeFalha.setNome("Layout");

    while(true)
    {
        try
        {
            string nomeInserido;
            cout << "Digite o nome do vocabulario: ";
            cin >> nomeInserido;
            nomeVocab.setNome(nomeInserido);
            break;
        }
        catch(invalid_argument &exp)
        {
            cout << "Nome do vocabulario com formato incorreto." << endl;
        }
    }

    resultado = cntrSVocabulario->pesquisarDadosVocabulario(nomeVocab);

    nomeRecebido = resultado.getNome();
    idiomaRecebido = resultado.getIdioma();
    dataRecebida = resultado.getData();

    if(nomeRecebido.getNome() == nomeFalha.getNome())
    {
        cout << "Falha na execucao da operacao" << endl;
    }
    else
    {
        cout << "Dados do vocabulario:\n" << nomeRecebido.getNome() << "\n" << idiomaRecebido.getIdioma() << "\n" << dataRecebida.getData() << "\n" << endl;
    }

}

void ComandoIAVocabularioConsTermo::executar(ISVocabulario* cntrSVocabulario) throw(runtime_error)
{

    Termo resultado;
    Nome nomeTermo, nomeFalha, nomeRecebido;
    ClasseDeTermo classeRecebido;
    Data dataRecebida;

    nomeFalha.setNome("Circunvizinhanca");

    while(true)
    {
        try
        {
            string nomeInserido;
            cout << "Digite o nome do termo: ";
            cin >> nomeInserido;
            nomeTermo.setNome(nomeInserido);
            break;
        }
        catch(invalid_argument &exp)
        {
            cout << "Nome do termo com formato incorreto." << endl;
        }
    }

    resultado = cntrSVocabulario->pesquisarTermo(nomeTermo);
    nomeRecebido = resultado.getNome();
    classeRecebido = resultado.getClasse();
    dataRecebida = resultado.getData();

    if(nomeRecebido.getNome() == nomeFalha.getNome())
    {
        cout << "Falha na execucao da operacao" << endl;
    }
    else
    {
        cout << "Dados do termo:\n"<< nomeRecebido.getNome() << "\n" << classeRecebido.getClasse() << "\n" << dataRecebida.getData() << "\n" << endl;
    }

}

void ComandoIAVocabularioConsDefTer::executar(ISVocabulario* cntrSVocabulario) throw(runtime_error)
{

    Definicao resultado;
    Nome nomeTermo;
    TextoDef txtFalha, txtRecebido;

    txtFalha.setTexto("Falha no texto de definicao");

    while(true)
    {
        try
        {
            string nomeInserido;
            cout << "Digite o nome do termo: ";
            cin >> nomeInserido;
            nomeTermo.setNome(nomeInserido);
            break;
        }
        catch(invalid_argument &exp)
        {
            cout << "Nome do termo com formato incorreto." << endl;
        }
    }

    resultado = cntrSVocabulario->pesquisarDefTermo(nomeTermo);
    txtRecebido = resultado.getTexto();

    if(txtRecebido.getTexto() == txtFalha.getTexto())
    {
        cout << "Falha na execucao da operacao" << endl;
    }
    else
    {
        cout << "Dados do vocabulario:\n"<< txtRecebido.getTexto() << endl;
    }

}

void ComandoIAVocabularioCriarTermo::executar(ISVocabulario* cntrSVocabulario) throw(runtime_error)
{

    bool resultado, falha = false;
    Termo termo;
    Nome nomeTermo;
    ClasseDeTermo classeTermo;
    Data dataTermo;

    while(true)
    {
        try
        {
            string nomeInserido;
            string classeInserido;
            string dataInserido;

            cout << "Digite o nome do termo: ";
            cin >> nomeInserido;
            nomeTermo.setNome(nomeInserido);
            termo.setNome(nomeTermo);

            cout << "Digite o classe de termo: ";
            cin >> classeInserido;
            classeTermo.setClasse(classeInserido);
            termo.setClasse(classeTermo);

            cout << "Digite a data de criacao do termo: ";
            cin >> dataInserido;
            dataTermo.setData(dataInserido);
            termo.setData(dataTermo);
            break;
        }
        catch(invalid_argument &exp)
        {
            cout << "Dados do termo com formato incorreto." << endl;
        }
    }

    resultado = cntrSVocabulario->incluirTermo(&termo);

    if(resultado == falha)
    {
        cout << "Falha na execucao da operacao." << endl;
    }
    else
    {
        cout << "Operacao executada com sucesso.\n" << endl;
    }

}

void ComandoIAVocabularioEditarTermo::executar(ISVocabulario* cntrSVocabulario) throw(runtime_error)
{
    bool resultado, falha = false;
    Nome nomeTermo;
    ClasseDeTermo classeTermo;

    while(true)
    {
        try
        {
            string nomeInserido;
            string classeInserido;
            string dataInserido;

            cout << "Digite o nome do termo: ";
            cin >> nomeInserido;
            nomeTermo.setNome(nomeInserido);

            cout << "Digite o classe de termo: ";
            cin >> classeInserido;
            classeTermo.setClasse(classeInserido);

            break;
        }
        catch(invalid_argument &exp)
        {
            cout << "Dados do termo com formato incorreto." << endl;
        }
    }

    resultado = cntrSVocabulario->alterarTermo(nomeTermo, classeTermo);

    if(resultado == falha)
    {
        cout << "Falha na execucao da operacao." << endl;
    }
    else
    {
        cout << "Operacao executada com sucesso.\n" << endl;
    }

}

void ComandoIAVocabularioExcluirTermo::executar(ISVocabulario* cntrSVocabulario) throw(runtime_error)
{
    bool resultado, falha = false;
    Nome nomeTermo;

    while(true)
    {
        try
        {
            string nomeInserido;

            cout << "Digite o nome do termo: ";
            cin >> nomeInserido;
            nomeTermo.setNome(nomeInserido);

            break;
        }
        catch(invalid_argument &exp)
        {
            cout << "Nome do termo com formato incorreto." << endl;
        }
    }

    resultado = cntrSVocabulario->removerTermo(nomeTermo);

    if(resultado == falha)
    {
        cout << "Falha na execucao da operacao." << endl;
    }
    else
    {
        cout << "Operacao executada com sucesso.\n" << endl;
    }

}

void ComandoIAVocabularioCriarDefTer::executar(ISVocabulario* cntrSVocabulario) throw(runtime_error)
{
    bool resultado, falha = false;
    TextoDef txtDefTermo;
    Data dataDefTermo;

    while(true)
    {
        try
        {
            string txtInserido;
            string dataInserido;

            cout << "Digite o texto de definicao do termo: ";
            cin >> txtInserido;
            txtDefTermo.setTexto(txtInserido);

            cout << "Digite a data da criacao da definicao do termo: ";
            cin >> dataInserido;
            dataDefTermo.setData(dataInserido);

            break;
        }
        catch(invalid_argument &exp)
        {
            cout << "Dados do termo com formato incorreto." << endl;
        }
    }

    resultado = cntrSVocabulario->incluirDefTermo(txtDefTermo, dataDefTermo);

    if(resultado == falha)
    {
        cout << "Falha na execucao da operacao." << endl;
    }
    else
    {
        cout << "Operacao executada com sucesso.\n" << endl;
    }

}

void ComandoIAVocabularioEditarDefTer::executar(ISVocabulario* cntrSVocabulario) throw(runtime_error)
{
    bool resultado, falha = false;
    Nome nomeTermo;
    TextoDef txtDefTermo;

    while(true)
    {
        try
        {
            string txtInserido;
            string nomeInserido;

            cout << "Digite o nome do termo: ";
            cin >> nomeInserido;
            nomeTermo.setNome(nomeInserido);

            cout << "Digite o novo texto de definicao do termo: ";
            cin >> txtInserido;
            txtDefTermo.setTexto(txtInserido);

            break;
        }
        catch(invalid_argument &exp)
        {
            cout << "Dados do termo com formato incorreto." << endl;
        }
    }

    resultado = cntrSVocabulario->alterarDefTermo(nomeTermo, txtDefTermo);

    if(resultado == falha)
    {
        cout << "Falha na execucao da operacao." << endl;
    }
    else
    {
        cout << "Operacao executada com sucesso.\n" << endl;
    }

}

void ComandoIAVocabularioExcluirDefTer::executar(ISVocabulario* cntrSVocabulario) throw(runtime_error)
{
   bool resultado, falha = false;
    Nome nomeTermo;

    while(true)
    {
        try
        {
            string nomeInserido;

            cout << "Digite o nome do termo: ";
            cin >> nomeInserido;
            nomeTermo.setNome(nomeInserido);

            break;
        }
        catch(invalid_argument &exp)
        {
            cout << "Nome do termo com formato incorreto." << endl;
        }
    }

    resultado = cntrSVocabulario->removerDefTermo(nomeTermo);

    if(resultado == falha)
    {
        cout << "Falha na execucao da operacao." << endl;
    }
    else
    {
        cout << "Operacao executada com sucesso.\n" << endl;
    }

}

void ComandoIAVocabularioCriarVoc::executar(ISVocabulario* cntrSVocabulario) throw(runtime_error)
{
    bool resultado, falha = false;
    Nome nomeVocab;
    TextoDef txtVocab;
    Idioma idiomaVocab;
    Data dataVocab;

    while(true)
    {
        try
        {
            string txtInserido;
            string nomeInserido;
            string idiomaInserido;
            string dataInserido;

            cout << "Digite o nome do vocabulario: ";
            cin >> nomeInserido;
            nomeVocab.setNome(nomeInserido);

            cout << "Digite o texto de definicao do vocabulario: ";
            cin >> txtInserido;
            txtVocab.setTexto(txtInserido);

            cout << "Digite o idioma do vocabulario: ";
            cin >> idiomaInserido;
            idiomaVocab.setIdioma(idiomaInserido);

            cout << "Digite a data de criacao do vocabulario: ";
            cin >> dataInserido;
            dataVocab.setData(dataInserido);

            break;
        }
        catch(invalid_argument &exp)
        {
            cout << "Dados do vocabulario com formato incorreto." << endl;
        }
    }

    resultado = cntrSVocabulario->inserirVocabulario(nomeVocab, txtVocab, idiomaVocab, dataVocab);

    if(resultado == falha)
    {
        cout << "Falha na execucao da operacao." << endl;
    }
    else
    {
        cout << "Operacao executada com sucesso.\n" << endl;
    }

}

void ComandoIAVocabularioEditarDefVoc::executar(ISVocabulario* cntrSVocabulario) throw(runtime_error)
{
    bool resultado, falha = false;
    Nome nomeVocab;
    TextoDef txtVocab;

    while(true)
    {
        try
        {
            string txtInserido;
            string nomeInserido;

            cout << "Digite o nome do vocabulario: ";
            cin >> nomeInserido;
            nomeVocab.setNome(nomeInserido);

            cout << "Digite o novo texto de definicao do vocabulario: ";
            cin >> txtInserido;
            txtVocab.setTexto(txtInserido);

            break;
        }
        catch(invalid_argument &exp)
        {
            cout << "Dados do vocabulario com formato incorreto." << endl;
        }
    }

    resultado = cntrSVocabulario->alterarDefVocabulario(nomeVocab, txtVocab);

    if(resultado == falha)
    {
        cout << "Falha na execucao da operacao." << endl;
    }
    else
    {
        cout << "Operacao executada com sucesso.\n" << endl;
    }

}

void ComandoIAVocabularioAltIdiomaVoc::executar(ISVocabulario* cntrSVocabulario) throw(runtime_error)
{
    bool resultado, falha = false;
    Nome nomeVocab;
    TextoDef txtVocab;
    Idioma idiomaVocab;
    Data dataVocab;

    while(true)
    {
        try
        {
            string nomeInserido;
            string idiomaInserido;

            cout << "Digite o nome do vocabulario: ";
            cin >> nomeInserido;
            nomeVocab.setNome(nomeInserido);

            cout << "Digite o idioma do vocabulario: ";
            cin >> idiomaInserido;
            idiomaVocab.setIdioma(idiomaInserido);

            break;
        }
        catch(invalid_argument &exp)
        {
            cout << "Dados do vocabulario com formato incorreto." << endl;
        }
    }

    resultado = cntrSVocabulario->trocarIdiomaVocabulario(nomeVocab, idiomaVocab);

    if(resultado == falha)
    {
        cout << "Falha na execucao da operacao." << endl;
    }
    else
    {
        cout << "Operacao executada com sucesso.\n" << endl;
    }

}

void ComandoIAVocabularioExcluirVoc::executar(ISVocabulario* cntrSVocabulario) throw(runtime_error)
{
    bool resultado, falha = false;
    Nome nomeVocab;

    while(true)
    {
        try
        {
            string nomeInserido;

            cout << "Digite o nome do vocabulario: ";
            cin >> nomeInserido;
            nomeVocab.setNome(nomeInserido);

            break;
        }
        catch(invalid_argument &exp)
        {
            cout << "Nome do vocabulario com formato incorreto." << endl;
        }
    }

    resultado = cntrSVocabulario->removerVocabulario(nomeVocab);

    if(resultado == falha)
    {
        cout << "Falha na execucao da operacao." << endl;
    }
    else
    {
        cout << "Operacao executada com sucesso.\n" << endl;
    }

}
