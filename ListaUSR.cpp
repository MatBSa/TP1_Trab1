#include "ListaUSR.hpp"

ResultadoUSR ListaUSR::incluir (Usuario usuario,int tipoUsr)
{

    ResultadoUSR resultado;
    string email;

    switch(tipoUsr)
    {
        case LEITOR:
            email = usuario.usuarioL.getEmail().getEmail();
            for(list<Usuario>::iterator elemento = lista.begin(); elemento != lista.end(); elemento++)
            {
                // A falha ocorre caso esse Email já esteja cadastrado como Leitor
                if(elemento->usuarioL.getEmail().getEmail()== email)
                {
                    resultado.setResultado(ResultadoUSR::FALHA);
                    return(resultado);
                }
            }
        case DESENVOLVEDOR:
            email = usuario.usuarioD.getEmail().getEmail();
            // A falha ocorre caso esse Email já esteja cadastrado como Desenvolvedor
            for(list<Usuario>::iterator elemento = lista.begin(); elemento != lista.end(); elemento++)
            {
                if(elemento->usuarioD.getEmail().getEmail()== email)
                {
                    resultado.setResultado(ResultadoUSR::FALHA);
                    return(resultado);
                }
            }
        case ADMINISTRADOR:
            email = usuario.usuarioA.getEmail().getEmail();
            // A falha ocorre caso esse Email já esteja cadastrado como Administrador
            for(list<Usuario>::iterator elemento = lista.begin(); elemento != lista.end(); elemento++)
            {
                if(elemento->usuarioA.getEmail().getEmail()== email)
                {
                    resultado.setResultado(ResultadoUSR::FALHA);
                    return(resultado);
                }
            }
    }
    lista.push_back(usuario);
    resultado.setResultado(ResultadoUSR::SUCESSO);
    return(resultado);
}

ResultadoUSR ListaUSR::pesquisar(Usuario usuario,int tipoUsr)
{
    ResultadoUSR resultado;

    resultado.setResultado(ResultadoUSR::FALHA);
    string email;
    string senha;

    switch(tipoUsr)
    {
        case LEITOR:
            email = (usuario).usuarioL.getEmail().getEmail();
            senha = (usuario).usuarioL.getSenha().getSenha();
        case DESENVOLVEDOR:
            email = (usuario).usuarioD.getEmail().getEmail();
            senha = (usuario).usuarioD.getSenha().getSenha();
        case ADMINISTRADOR:
            email = (usuario).usuarioA.getEmail().getEmail();
            senha = (usuario).usuarioA.getSenha().getSenha();
    }

    for(list<Usuario>::iterator elemento = lista.begin(); elemento != lista.end(); elemento++)
    {

            switch(tipoUsr)
            {
                case LEITOR:
                    if(elemento->usuarioL.getEmail().getEmail() == email && elemento->usuarioL.getSenha().getSenha()==senha)
                    {
                        resultado.setResultado(ResultadoUSR::SUCESSO);
                        (usuario).usuarioL.setNome(elemento->usuarioL.getNome());
                        (usuario).usuarioL.setSobrenome(elemento->usuarioL.getSobrenome());
                    }
                case DESENVOLVEDOR:
                    if(elemento->usuarioD.getEmail().getEmail() == email && elemento->usuarioD.getSenha().getSenha()==senha)
                    {
                        resultado.setResultado(ResultadoUSR::SUCESSO);
                        (usuario).usuarioL.setNome(elemento->usuarioD.getNome());
                        (usuario).usuarioD.setSobrenome(elemento->usuarioD.getSobrenome());
                        (usuario).usuarioD.setData(elemento->usuarioD.getData());
                    }

                case ADMINISTRADOR:
                    if(elemento->usuarioA.getEmail().getEmail() == email && elemento->usuarioA.getSenha().getSenha()==senha)
                    {
                        resultado.setResultado(ResultadoUSR::SUCESSO);
                        (usuario).usuarioA.setNome(elemento->usuarioD.getNome());
                        (usuario).usuarioA.setSobrenome(elemento->usuarioA.getSobrenome());
                        (usuario).usuarioA.setData(elemento->usuarioA.getData());
                        (usuario).usuarioA.setTelefone(elemento->usuarioA.getTelefone());
                        (usuario).usuarioA.setEndereco(elemento->usuarioA.getEndereco());
                    }
            }
    }
   resultado.setUsuario(usuario);
   return(resultado);
}


