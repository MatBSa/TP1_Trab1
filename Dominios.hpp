 #ifndef DOMINIOS_HPP_INCLUDED
 #define DOMINIOS_HPP_INCLUDED

 #include <stdexcept>

 using namespace std;

 /*---------------------------------------------------------Classe Nome----------------------------------------------------------------*/
 class Nome /// Essa classe armazena uma string que representa um nome de usuario.
 ///Os objetos dessa classe representam representam o atributo nome de uma entidade,
 {

 private:

     const static int tamNome = 20;
     string nome;

 //Métodos Privados:
     void validar(string) throw (invalid_argument);

 public:

 /// Recebe  uma string e a armazena em um objeto desta classe.
 /// A string não pode possuir digitos ou caracteres especiais,
 /// deve ter no maximo 20 caracteres, deve começar com uma letra
 /// maiuscula e esta deve ser a unica letra maiuscula.
     void setNome(string);

 //getNome retorna o atributo nome do objeto
 /// Retorna a string previamente armazenada como o atributo nome
 /// De um objeto a classe
     string getNome()
     {
         return nome;
     }

 };

 /*----------------------------------------------------------Classe Sobrenome-----------------------------------------------------------*/
 class Sobrenome/// Essa classe armazena uma string que representa um sobrenome de usuario.
 ///Os objetos dessa classe representam representam o atributo sobrenome de uma entidade,
 {

 private:

     const static int tamSobrenome = 20;
     string sobrenome;

     void validar(string) throw (invalid_argument);

 public:


     void setSobreNome(string);
/// Recebe  uma string e a armazena em um objeto desta classe.
/// A string nao pode possuir digitos ou caracteres especiais,
/// deve ter no maximo 20 caracteres, deve começar com uma letra
/// maiuscula e esta deve ser a unica letra maiuscula.

     string getSobreNome()
/// Retorna uma string que representa um sobrenome de usuario
/// previamente armazenada em um objeto da classe
     {
         return sobrenome;
     }

 };

 /*-------------------------------------------------Classe Telefone-------------------------------------------------------------*/

 class Telefone /// Representa o telefone de um usuario, os objetos dessa classe
 /// representam o atributo telefone de uma entidade
 {
 private:

     const static int tamTelefone = 12;
     string telefone;

     void validar(string) throw (invalid_argument);

 public:



     void setTelefone(string) throw (invalid_argument);
/// Recebe  uma string e a armazena em um objeto desta classe.
/// A string nao pode possuir letras ou caracteres especiais exceto hifen(-),
/// que deve ser o oitavo (e apenas o oitavo) caractere necessariamente da string,
/// A string deter ter 12 caracteres necessariamente.


     string getTelefone() const
///Retorna uma string que representa um telefone previamente armazenado
///em um objeto desta classe
     {
         return telefone;
     }
 };

 /*------------------------------------------------------Classe Endereco--------------------------------------------------------*/

 class Endereco /// Os objetos dessa classe armazenam uma string que representam o endereco e um usuario
///Os objetos dessa classe sao usados como atributos de classas de entidade
 {

 private:

     const static int tamEndereco = 20;
     string endereco;

     void validar(string) throw (invalid_argument);

 public:

     void setEndereco(string) throw (invalid_argument);
/// Recebe  uma string e a armazena em um objeto desta classe.
/// A string nao pode possuir caracteres especiais ou digitos,
/// A string poe conter espacos em branco, desde que nao sejam
/// nem o primeiro e nem o ultimo caractere

     string getEndereco()
///Retorna uma string que representa um endereco previamente armazenado
///em um objeto desta classe

     {
         return endereco;
     }
 };

 /*--------------------------------------------------------Classe Data----------------------------------------------------------*/

 class Data /// Os objetos dessa classe armazenam uma string que representaa data de entrada de um usuario
///ou de uma definicao ou termo, objetos dessa classe sao usados como atributos de classas de entidade
 {

 private:

     const static int tamData = 10;
     string data;

     int  charToInt(char);
     bool validaFor(string);
     string validaData(string);

 public:

     void setData(string) throw (invalid_argument);
/// Recebe  uma string e a armazena em um objeto desta classe.
/// A string nao pode possuir letras ou caracteres especiais exceto '/',
/// Que deve ser o terceiro e o sexto caracteres necessariamente
/// e podem apenas aparecer nas posicoes citadas. As datas consideram ano
/// bissexto. Formato correto DD/MM/YYY.

     string getData()
///Retorna uma string que representa uma data previamente armazenada
///em um objeto desta classe
     {
         return data;
     }
 };

/*----------------------------------------------------EnderecoDeCorreioEletronico------------------------------------------------*/

 class Email /// Essa classe armazena e representa o Email de um usuario
///Objetos dessa classe sao atributos de objetos de uma classe de entidade
 {
private:
    string email;
    bool validar(string);
public:

    void setEmail(string) throw (invalid_argument);
/// Recebe  uma string e a armazena em um objeto desta classe.
/// A string deve ter necessariamente o caractere @ separando local
/// e dominio, o dominio nao pode conter unicamente numeros ou comecar ou terminar com
/// hifen, sendo esse o unico caractere especial permitido no dominio, ja o local nao pode
/// comecar ou terminar com  ponto e pode conter caracteres especiais

    string getEmail()
///Retorna uma string que representa um Email previamente armazenado
///em um objeto desta classe
    {
        return(email);
    }

 };
 /*-------------------------------------------------------------Classe Senha------------------------------------------------------------*/

 class Senha /// Essa classe representa uma senha definida por um usuario
 ///A classe eh usada como atributo de objetos e classes de entidade
 {

 private:
 //Constantes
     const static int tamNome = 20;
     const static int tamSenha = 8;
 //Atributos privados
     string nomeS;
     string senha;

 //Métodos privados:

 //Procura o nome do usuário dentro da senha.
 //Retorna verdadeiro caso exista e falso caso contrário.
     int contaChar(string);
 //Verifica se a senha escolhida obedece aos padrões estabelecidos
     void validar(string) throw (invalid_argument);

 //Procura dentro da senha uma letra Maiúscula, uma minúscula e um dìgito
     bool procuraChar(string);


 public:


 //Armazena a senha
     void setSenha(string);
/// Recebe  uma string e a armazena em um objeto desta classe.
/// A string deve ter pelo menos uma letra maiuscula, um digito
/// e uma letra minuscula. O tamanho da string eve ser necessariamente
/// 8 caracteres, tambem nao pode conter caracteres especiais
 //Retorna a senha
     string getSenha()
///Retorna uma string que representa uma Senha previamente armazenado
///em um objeto desta classe

     {
         return(senha);
     }
 };

/*-------------------------------------------------------- Classe TextoDefinicao-------------------------------------------------------*/

class TextoDef /// Essa classe representa e armazena uma definicao de um termo
///Os objetos da classe sao usados como atributos de objetos da classe Termo

{

private:
/*Atributos privados*/
    string texto;

/*Métodos privados*/
    bool validar(string);

public:

/*Métodos Públicos*/
        void setTexto(string) throw (invalid_argument);
/// Recebe  uma string e a armazena em um objeto desta classe.
/// A string deve ter no maximo 30 caracteres podendo eles ser quaisquer

        string getTexto(){
///Retorna uma string que representa um texto de definicao previamente armazenado
///em um objeto desta classe
            return(texto);
        }


};


/*-----------------------------------------------------classe Idioma------------------------------------------------------------*/

class Idioma /// Os objetos dessa classe armazenam o idioma de uma definicao
/// e sao usados como atributos e objetos da classe definicao
{

private:

    string idioma;
    bool validar(string);

public:

    void setIdioma(string) throw(invalid_argument);
/// Recebe  uma string e a armazena em um objeto desta classe.
/// A string deve ter ser uma das seguintes opcoes:
/// "ENG", "GER", "ITA", "POR", "SPA" ou "FRA"

    string getIdioma()
///Retorna uma string que representa um Idioma previamente armazenado
///em um objeto desta classe
    {
        return(idioma);
    }

};

/*---------------------------------------------------ClasseDeTermo--------------------------------------------------------------*/

class ClasseDeTermo /// Os objetos dessa classe armazenam a classe de termo
///podento variar entre preferida e nao preferida, sao usados como atributos e objetos da classe Termo
{

private:

    string claTer;
    bool validar(string );

public:

    void setClasse(string) throw(invalid_argument);
/// Recebe  uma string e a armazena em um objeto desta classe.
/// A string deve ter ser uma das seguintes opcoes:
/// "PT" ou "NP"
    string getClasse(){
        return(claTer);
    }
};
#endif
/*-----------------------------------------------------FIM----------------------------------------------------------------------*/
