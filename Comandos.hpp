#ifndef COMANDOS_HPP_INCLUDED
#define COMANDOS_HPP_INCLUDED

#include "Interface.hpp"
#include "Dominios.hpp"
#include "Entidades.hpp"

#include <stdexcept>
#include <iostream>
#include <cstdlib>

class ComandoIAVocabulario {

public:

    // Método por meio do qual é solicitada a execução do comando.

    virtual void executar(ISVocabulario*) throw(runtime_error) = 0;

    // Método destrutor virtual.

    virtual ~ComandoIAVocabulario(){}
};

class ComandoIAVocabularioLisNomesVoc:public ComandoIAVocabulario {

public:

    // Método por meio do qual é solicitada a execução do comando.

    void executar(ISVocabulario*) throw(runtime_error);
};

class ComandoIAVocabularioAprDadosVoc:public ComandoIAVocabulario {

    // Método por meio do qual é solicitada a execução do comando.

    void executar(ISVocabulario*) throw(runtime_error);
};

class ComandoIAVocabularioConsTermo:public ComandoIAVocabulario {

    // Método por meio do qual é solicitada a execução do comando.

    void executar(ISVocabulario*) throw(runtime_error);
};

class ComandoIAVocabularioConsDefTer:public ComandoIAVocabulario {

    // Método por meio do qual é solicitada a execução do comando.

    void executar(ISVocabulario*) throw(runtime_error);
};

class ComandoIAVocabularioCriarTermo:public ComandoIAVocabulario {

    // Método por meio do qual é solicitada a execução do comando.

    void executar(ISVocabulario*) throw(runtime_error);
};

class ComandoIAVocabularioEditarTermo:public ComandoIAVocabulario {

    // Método por meio do qual é solicitada a execução do comando.

    void executar(ISVocabulario*) throw(runtime_error);
};

class ComandoIAVocabularioExcluirTermo:public ComandoIAVocabulario {

    // Método por meio do qual é solicitada a execução do comando.

    void executar(ISVocabulario*) throw(runtime_error);
};

class ComandoIAVocabularioCriarDefTer:public ComandoIAVocabulario {

    // Método por meio do qual é solicitada a execução do comando.

    void executar(ISVocabulario*) throw(runtime_error);
};

class ComandoIAVocabularioEditarDefTer:public ComandoIAVocabulario {

    // Método por meio do qual é solicitada a execução do comando.

    void executar(ISVocabulario*) throw(runtime_error);
};

class ComandoIAVocabularioExcluirDefTer:public ComandoIAVocabulario {

    // Método por meio do qual é solicitada a execução do comando.

    void executar(ISVocabulario*) throw(runtime_error);
};

class ComandoIAVocabularioCriarVoc:public ComandoIAVocabulario {

    // Método por meio do qual é solicitada a execução do comando.

    void executar(ISVocabulario*) throw(runtime_error);
};

class ComandoIAVocabularioEditarDefVoc:public ComandoIAVocabulario {

    // Método por meio do qual é solicitada a execução do comando.

    void executar(ISVocabulario*) throw(runtime_error);
};

class ComandoIAVocabularioAltIdiomaVoc:public ComandoIAVocabulario {

    // Método por meio do qual é solicitada a execução do comando.

    void executar(ISVocabulario*) throw(runtime_error);
};

class ComandoIAVocabularioExcluirVoc:public ComandoIAVocabulario {

    // Método por meio do qual é solicitada a execução do comando.

    void executar(ISVocabulario*) throw(runtime_error);
};

#endif // COMANDOS_H_INCLUDED
