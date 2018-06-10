#include "Comandos.hpp"


// Método por meio do qual é solicitada a execução do comando.

void ComandoIAVocabularioLisNomesVoc::executar(ISVocabulario* cntrSVocabulario) throw(runtime_error)
{

    Nome vocabulario;

    // Solicitar serviço.

    vocabulario = cntrSVocabulario->listNomeVocabularios();

    if(vocabulario.getNome() == "Falha")
    {
        cout << "Falha na execucao da operacao" << endl;
    }
    cout << "Os vocabularios sao:\n"<< vocabulario.getNome() << endl;

}

void ComandoIAVocabularioAprDadosVoc::executar(ISVocabulario* CntrAVocabulario) throw(runtime_error){
}

void ComandoIAVocabularioConsTermo::executar(ISVocabulario* cntrSVocabulario) throw(runtime_error){
}

void ComandoIAVocabularioConsDefTer::executar(ISVocabulario* cntrSVocabulario) throw(runtime_error){
}

void ComandoIAVocabularioCriarTermo::executar(ISVocabulario* cntrSVocabulario) throw(runtime_error){
}

void ComandoIAVocabularioEditarTermo::executar(ISVocabulario* cntrSVocabulario) throw(runtime_error){
}

void ComandoIAVocabularioExcluirTermo::executar(ISVocabulario* cntrSVocabulario) throw(runtime_error){
}

void ComandoIAVocabularioCriarDefTer::executar(ISVocabulario* cntrSVocabulario) throw(runtime_error){
}

void ComandoIAVocabularioEditarDefTer::executar(ISVocabulario* cntrSVocabulario) throw(runtime_error){
}

void ComandoIAVocabularioExcluirDefTer::executar(ISVocabulario* cntrSVocabulario) throw(runtime_error){
}

void ComandoIAVocabularioCriarVoc::executar(ISVocabulario* cntrSVocabulario) throw(runtime_error){
}

void ComandoIAVocabularioEditarDefVoc::executar(ISVocabulario* cntrSVocabulario) throw(runtime_error){
}

void ComandoIAVocabularioAltIdiomaVoc::executar(ISVocabulario* cntrSVocabulario) throw(runtime_error){
}

void ComandoIAVocabularioExcluirVoc::executar(ISVocabulario* cntrSVocabulario) throw(runtime_error){
}
