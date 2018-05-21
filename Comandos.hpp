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

    // M�todo por meio do qual � solicitada a execu��o do comando.

    virtual void executar(ISVocabulario*) throw(runtime_error) = 0;

    // M�todo destrutor virtual.

    virtual ~ComandoIAVocabulario(){}
};

class ComandoIAVocabularioLisNomesVoc:public ComandoIAVocabulario {

public:

    // M�todo por meio do qual � solicitada a execu��o do comando.

    void executar(ISVocabulario*) throw(runtime_error);
};

class ComandoIAVocabularioAprDadosVoc:public ComandoIAVocabulario {

    // M�todo por meio do qual � solicitada a execu��o do comando.

    void executar(ISVocabulario*) throw(runtime_error);
};

class ComandoIAVocabularioConsTermo:public ComandoIAVocabulario {

    // M�todo por meio do qual � solicitada a execu��o do comando.

    void executar(ISVocabulario*) throw(runtime_error);
};

class ComandoIAVocabularioConsDefTer:public ComandoIAVocabulario {

    // M�todo por meio do qual � solicitada a execu��o do comando.

    void executar(ISVocabulario*) throw(runtime_error);
};

class ComandoIAVocabularioCriarTermo:public ComandoIAVocabulario {

    // M�todo por meio do qual � solicitada a execu��o do comando.

    void executar(ISVocabulario*) throw(runtime_error);
};

class ComandoIAVocabularioEditarTermo:public ComandoIAVocabulario {

    // M�todo por meio do qual � solicitada a execu��o do comando.

    void executar(ISVocabulario*) throw(runtime_error);
};

class ComandoIAVocabularioExcluirTermo:public ComandoIAVocabulario {

    // M�todo por meio do qual � solicitada a execu��o do comando.

    void executar(ISVocabulario*) throw(runtime_error);
};

class ComandoIAVocabularioCriarDefTer:public ComandoIAVocabulario {

    // M�todo por meio do qual � solicitada a execu��o do comando.

    void executar(ISVocabulario*) throw(runtime_error);
};

class ComandoIAVocabularioEditarDefTer:public ComandoIAVocabulario {

    // M�todo por meio do qual � solicitada a execu��o do comando.

    void executar(ISVocabulario*) throw(runtime_error);
};

class ComandoIAVocabularioExcluirDefTer:public ComandoIAVocabulario {

    // M�todo por meio do qual � solicitada a execu��o do comando.

    void executar(ISVocabulario*) throw(runtime_error);
};

class ComandoIAVocabularioCriarVoc:public ComandoIAVocabulario {

    // M�todo por meio do qual � solicitada a execu��o do comando.

    void executar(ISVocabulario*) throw(runtime_error);
};

class ComandoIAVocabularioEditarDefVoc:public ComandoIAVocabulario {

    // M�todo por meio do qual � solicitada a execu��o do comando.

    void executar(ISVocabulario*) throw(runtime_error);
};

class ComandoIAVocabularioAltIdiomaVoc:public ComandoIAVocabulario {

    // M�todo por meio do qual � solicitada a execu��o do comando.

    void executar(ISVocabulario*) throw(runtime_error);
};

class ComandoIAVocabularioExcluirVoc:public ComandoIAVocabulario {

    // M�todo por meio do qual � solicitada a execu��o do comando.

    void executar(ISVocabulario*) throw(runtime_error);
};

#endif // COMANDOS_H_INCLUDED
