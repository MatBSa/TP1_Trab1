#include "Controladoras.hpp"
#include "Comandos.hpp"

void CntrAVocabulario ::executar(const int codUsuario)throw(runtime_error)
{
    ComandoIAVocabulario *comando;

    int opcao;

    while(true)
    {

        // Ilustra limpeza de tela.

        // system("CLS");

        // Apresentar as op��es.

        cout << endl << "Gerenciamento de Vocabulario." << endl << endl;

        cout << "Listar nomes dos vocabul�rios controlados   - " << listarNomesVocabularios << endl;
        cout << "Apresentar dados de vocabul�rio controlado  - " << apresentarDadosVocabulario << endl;
        cout << "Consultar termo                             - " << consultarTermo << endl;
        cout << "Consultar defini��o de termo                - " << consultarDefinicaoTermo << endl;

        cout << "Criar termo                                 - " << criarTermo << endl;
        cout << "Editar termo                                - " << editarTermo << endl;
        cout << "Excluir termo                               - " << excluirTermo << endl;

        cout << "Criar defini��o de termo                    - " << criarDefinicaoTermo << endl;
        cout << "Editar defini��o de termo                   - " << editarDefinicaoTermo << endl;
        cout << "Excluir defini��o de termo                  - " << excluirDefinicaoTermo << endl;

        cout << "Criar vocabul�rio controlado                - " << criarVocabularioControlado << endl;
        cout << "Editar defini��o de vocabul�rio controlado  - " << editarDefinicaoVocabulario << endl;
        cout << "Alterar idioma de vocabul�rio controlado    - " << alterarIdiomaVocabulario << endl;
        cout << "Excluir vocabul�rio controlado              - " << excluirVocabulario << endl;


        cout << "Retornar                                    - " << retornar << endl << endl;
        cout << "Selecione uma opcao :";

        cin >> opcao;

        switch(opcao)
        {
        case listarNomesVocabularios:
            comando = new ComandoIAVocabularioLisNomesVoc();
            comando->executar(cntrSVocabulario);
            delete comando;
            break;
        case apresentarDadosVocabulario:
            comando = new ComandoIAVocabularioAprDadosVoc();
            comando->executar(cntrSVocabulario);
            delete comando;
            break;
        case consultarTermo:
            comando = new ComandoIAVocabularioConsTermo();
            comando->executar(cntrSVocabulario);
            delete comando;
            break;
        case consultarDefinicaoTermo:
            comando = new ComandoIAVocabularioConsDefTer;
            comando->executar(cntrSVocabulario);
            delete comando;
            break;
        case criarTermo:
            comando = new ComandoIAVocabularioCriarTermo;
            comando->executar(cntrSVocabulario);
            delete comando;
            break;
        case editarTermo:
            comando = new ComandoIAVocabularioEditarTermo;
            comando->executar(cntrSVocabulario);
            delete comando;
            break;
        case excluirTermo:
            comando = new ComandoIAVocabularioExcluirTermo;
            comando->executar(cntrSVocabulario);
            delete comando;
            break;
        case criarDefinicaoTermo:
            comando = new ComandoIAVocabularioCriarDefTer;
            comando->executar(cntrSVocabulario);
            delete comando;
            break;
        case editarDefinicaoTermo:
            comando = new ComandoIAVocabularioEditarDefTer;
            comando->executar(cntrSVocabulario);
            delete comando;
            break;
        case excluirDefinicaoTermo:
            comando = new ComandoIAVocabularioExcluirDefTer;
            comando->executar(cntrSVocabulario);
            delete comando;
            break;
        case criarVocabularioControlado:
            comando = new ComandoIAVocabularioCriarVoc;
            comando->executar(cntrSVocabulario);
            delete comando;
            break;
        case editarDefinicaoVocabulario:
            comando = new ComandoIAVocabularioEditarDefVoc;
            comando->executar(cntrSVocabulario);
            delete comando;
            break;
        case alterarIdiomaVocabulario:
            comando = new ComandoIAVocabularioAltIdiomaVoc;
            comando->executar(cntrSVocabulario);
            delete comando;
            break;
        case excluirVocabulario:
            comando = new ComandoIAVocabularioExcluirVoc;
            comando->executar(cntrSVocabulario);
            delete comando;
            break;
        }

        if(opcao == retornar)
        {
            break;
        }

    }

    return;
}

