#include "Controladoras.hpp"
#include "Comandos.hpp"

void CntrAVocabulario ::executar(const int &codUsuario)throw(runtime_error)
{
    ComandoIAVocabulario *comando;

    int opcao, desenvolvedor = 2, administrador = 3;

    while(true)
    {


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
            if(codUsuario == desenvolvedor || codUsuario == administrador){
            comando = new ComandoIAVocabularioCriarTermo;
            comando->executar(cntrSVocabulario);
            delete comando;
            }else{
                cout << "Usuario nao autorizado a usar essa funcao." << excluirVocabulario << endl;
            }
            break;
        case editarTermo:
            if(codUsuario == desenvolvedor || codUsuario == administrador){
            comando = new ComandoIAVocabularioEditarTermo;
            comando->executar(cntrSVocabulario);
            delete comando;
            }else{
                cout << "Usuario nao autorizado a usar essa funcao." << excluirVocabulario << endl;
            }
            break;
        case excluirTermo:
            if(codUsuario == desenvolvedor || codUsuario == administrador){
            comando = new ComandoIAVocabularioExcluirTermo;
            comando->executar(cntrSVocabulario);
            delete comando;
            }else{
                cout << "Usuario nao autorizado a usar essa funcao." << excluirVocabulario << endl;
            }
            break;
        case criarDefinicaoTermo:
            if(codUsuario == desenvolvedor || codUsuario == administrador){
            comando = new ComandoIAVocabularioCriarDefTer;
            comando->executar(cntrSVocabulario);
            delete comando;
            }else{
                cout << "Usuario nao autorizado a usar essa funcao." << excluirVocabulario << endl;
            }
            break;
        case editarDefinicaoTermo:
            if(codUsuario == desenvolvedor || codUsuario == administrador){
            comando = new ComandoIAVocabularioEditarDefTer;
            comando->executar(cntrSVocabulario);
            delete comando;
            }else{
                cout << "Usuario nao autorizado a usar essa funcao." << excluirVocabulario << endl;
            }
            break;
        case excluirDefinicaoTermo:
            if(codUsuario == desenvolvedor || codUsuario == administrador){
            comando = new ComandoIAVocabularioExcluirDefTer;
            comando->executar(cntrSVocabulario);
            delete comando;
            }else{
                cout << "Usuario nao autorizado a usar essa funcao." << excluirVocabulario << endl;
            }
            break;
        case criarVocabularioControlado:
            if(codUsuario == administrador){
            comando = new ComandoIAVocabularioCriarVoc;
            comando->executar(cntrSVocabulario);
            delete comando;
            }else{
                cout << "Usuario nao autorizado a usar essa funcao." << excluirVocabulario << endl;
            }
            break;
        case editarDefinicaoVocabulario:
            if(codUsuario == administrador){
            comando = new ComandoIAVocabularioEditarDefVoc;
            comando->executar(cntrSVocabulario);
            delete comando;
            }else{
                cout << "Usuario nao autorizado a usar essa funcao." << excluirVocabulario << endl;
            }
            break;
        case alterarIdiomaVocabulario:
            if(codUsuario == administrador){
            comando = new ComandoIAVocabularioAltIdiomaVoc;
            comando->executar(cntrSVocabulario);
            delete comando;
            }else{
                cout << "Usuario nao autorizado a usar essa funcao." << excluirVocabulario << endl;
            }
            break;
        case excluirVocabulario:
            if(codUsuario == administrador){
            comando = new ComandoIAVocabularioExcluirVoc;
            comando->executar(cntrSVocabulario);
            delete comando;
            }else{
                cout << "Usuario nao autorizado a usar essa funcao." << excluirVocabulario << endl;
            }
            break;
        }

        if(opcao == retornar)
        {
            break;
        }

    }

    return;
}

