 #include "Dominios.hpp"
 #include <iostream>
#include<math.h>

 using namespace std;

 /*------------------------------------------------Métodos da classe Nome--------------------------------------------------------------*/

 void Nome::validar(string nome) throw (invalid_argument)
 {
     int tamLetras = 26, tamNumeros = 10;
     char letrasMaiusculas[tamLetras] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','X','W','Y','Z'};
     char numerosInteiros[tamNumeros] = {'0','1','2','3','4','5','6','7','8','9'};
     int j,i=0;

     bool achou = false;

 //Verifica se o nome possui mais de 20 caracteres (tamNome = 20)
     for(i=0;nome[i]!= '\0';i++)
     { // As strings terminam com \0
         if(i==tamNome)
         {// se i = 20, o nome tem mais de tamNome caracteres, pois i começa em zero
             throw invalid_argument("O nome nao pode conter mais de 20 caracteres");
         }
     }

     i=0; // reinicialização da variável de contagem

 //Verifica se a primeira letra do nome é maiuscula.
     while(achou != true && i<tamLetras)
     {
         if(nome[0] == letrasMaiusculas[i])
             achou = true;
         i = i+1;
     }
     if(achou == false){
         throw invalid_argument("\nNome não começa com letra maiuscula\n.");
     }
 // Verifica letra por letra do nome se alguma é um número inteiro
     for(i=0; nome[i]!= '\0'; i++)
     {
         for(int i=0; j<=tamNumeros; j++)
         {
             if(nome[i] == numerosInteiros[j])
             {
                 throw invalid_argument("\nO nome contem digitos\n");
             }
         }
     }
 // Verifica se alguma letra é maiuscula além da primeira
     for(i=1; nome[i]!= '\0'; i++)
     {
         for(j=0; j<tamLetras; j++)
         {
             if(nome[i] == letrasMaiusculas[j])
             {
                 throw invalid_argument("\nLetras maiusculas no meio ou fim do nome\n");
             }
         }
     }
 }

 void Nome::setNome(string nome)
 {
     validar(nome);
         this->nome = nome;
 }


 /*-------------------------------------------------- Métodos da classe Sobrenome-------------------------------------------------------*/

 void Sobrenome::validar(string sobrenome) throw (invalid_argument)
 {

     int tamLetras = 26, tamNumeros = 10;
     char letrasMaiusculas[tamLetras] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','X','W','Y','Z'};
     char numerosInteiros[tamNumeros] = {'0','1','2','3','4','5','6','7','8','9'};
     int i=0, j=0;

     bool achou=false;

      //Verifica se o nome possui mais de 20 caracteres (tamNome = 20)
     for(i=0;sobrenome[i]!= '\0';i++);

         if(i==tamSobrenome)
         {
             throw invalid_argument("O nome nao pode conter mais de 20 caracteres");
         }


     i=0; // reinicialização da variável de contagem

 //Verifica se a primeira letra do nome é maiuscula.
     while(achou != true && i<tamLetras)
     {
         if(sobrenome[0] == letrasMaiusculas[i])
             achou = true;
         i = i+1;
     }
     if(achou == false){
         throw invalid_argument("\nNome não começa com letra maiuscula\n.");
     }
 // Verifica letra por letra do nome se alguma é um número inteiro
     for(i=0; sobrenome[i]!= '\0'; i++)
     {
         for(int i=0; j<=tamNumeros; j++)
         {
             if(sobrenome[i] == numerosInteiros[j])
             {
                 throw invalid_argument("\nO nome contem digitos\n");
             }
         }
     }
 // Verifica se alguma letra é maiuscula além da primeira
     for(i=1; sobrenome[i]!= '\0'; i++)
     {
         for(j=0; j<tamLetras; j++)
         {
             if(sobrenome[i] == letrasMaiusculas[j])
             {
                 throw invalid_argument("\nLetras maiusculas no meio ou fim do nome\n");
             }
         }
     }
 }

 void Sobrenome::setSobreNome(string sobrenome)
 {
     validar(sobrenome);
         this->sobrenome = sobrenome;
 }

 /*------------------------------------------------métodos da classe telefone-----------------------------------------------------------*/


 void Telefone::validar(string telefone) throw (invalid_argument)
 {

     int tamNumeros = 10;
     char numerosInteiros[tamNumeros] = {'0','1','2','3','4','5','6','7','8','9'};
     int i=0, j=0;
     bool achou=false;

//Verifica se as posições são numeros em telefone.
     for(i=0; telefone[i]!='\0' ; i++)
     {
                 while(achou != true && j<tamNumeros )
                 {

                     if(telefone[i] == numerosInteiros[j] ||( i==7 && telefone[i]=='-') )
                     {
                         achou = true;
                     }
                     j = j+1;
                 }
                 if(achou == false)
                 {
                     throw invalid_argument("Argumento invalido.");
                 }
                 achou=false;
                 j=0;
     }
     if(i!=tamTelefone || telefone[7]!='-')
    {
         throw invalid_argument("Argumento invalido.");
    }
 }

 void Telefone::setTelefone(string telefone) throw (invalid_argument)
 {
    validar(telefone);
    this->telefone = telefone;
 }
 /*------------------------------------------------------------Métodos da classe Data---------------------------------------------------------------*/

 /*Checa se a data está no formato DD/MM/AAAA onde D, M e A são inteiros*/
 bool Data::validaFor(string data)
{
    int carac;
    int i;
    bool achouChar = false;

    for(i=0; data[i] != '\0' ; i++)
    {
        if(i != 2 && i!= 5)
        {
            carac = data[i];
            if(carac < 48 || 57 < carac  )
            {
                achouChar=true;
            }
        }
    }
    if(i != tamData || achouChar == true || data[2] != '/' || data[5] != '/')
    {
        return(false);
    }
    else
    {
        return(true);
    }
}

int Data::charToInt(char num)
{
  const int asc = 48;
  int carac;
  int inteiro=0;

     carac = num;
     inteiro = carac - asc;

 return(inteiro);
}

string Data::validaData(string data)
{
    int inteiro;
    int i;
    int diaInt = 0;
    int mesInt=0;
    int anoInt=0;
    int diaVal;


    for(i=6; i < 10 ;i++)
    {
        inteiro = charToInt(data[i]);
        anoInt = anoInt+inteiro*pow(10,9-i);
    }

    for(i=3; i < 5 ;i++)
    {
        inteiro = charToInt(data[i]);
        mesInt = mesInt+inteiro*pow(10,4-i);
    }

    for(i=0; i < 2 ;i++)
    {
        inteiro = charToInt(data[i]);
        diaInt = diaInt+inteiro*pow(10,1-i);
    }

    if(diaInt==0 && anoInt==0 && anoInt==0)
    {
       return("dataInicial");
    }
    if(anoInt<1900 || 2099<anoInt)
    {
        return("anoInvalido");
    }
    if(mesInt<1 || 12<mesInt)
    {
        return("mesInvalido");
    }

    switch(mesInt)
    {
        case 1:
            diaVal = 31;
            break;
        case 2:
            if((anoInt - 1900) %4 == 0)
            {
                diaVal = 29;
            }
            else
            {
                diaVal = 28;
            }
            break;
        case 3:
            diaVal=31;
            break;
        case 4:
            diaVal = 30;
            break;
        case 5:
            diaVal = 31;
            break;
        case 6:
            diaVal = 30;
            break;
        case 7:
            diaVal= 31;
            break;
        case 8:
            diaVal= 31;
            break;
        case 9:
            diaVal=30;
            break;
        case 10:
            diaVal=31;
            break;
        case 11:
            diaVal=30;
            break;
        case 12:
            diaVal=31;
            break;
    }

    if(diaInt<1 || diaInt>diaVal)
    {
        return("diaInvalido");
    }
    return("dataValida");
}


 void Data::setData (string data) throw (invalid_argument)
 {
     string dataVal;
     bool forVal;

     forVal = validaFor(data);

     if(forVal == false)
     {
        throw invalid_argument("\n Formato inválido de data\n");
     }

     dataVal = validaData(data);


     if(dataVal == "anoInvalido")
    {
        throw invalid_argument("\n Ano invalido \n");
    }

     dataVal = validaData(data);

     if(dataVal == "mesInvalido")
     {
        throw invalid_argument("\n Mes invalido \n");
     }

     dataVal = validaData(data);
     if(dataVal == "diaInvalido")
     {
         throw invalid_argument("\n Dia invalido \n");
     }

     this->data = data;

 }

/*-------------------------------------------------------------Metodos da classe Email--------------------------------------------------------------*/

bool Email::validar(string email)
{
    int i;
    int j;
    int carac;
    int posA=-1;
    int contaA=0;
    char permitidos[21] = {'!','#','$','%','&','*','_','-','/','?','^','_','`','{','|','}','~',';','.','\n','\0'};
    int chValido=0;
    bool achouInvalido;
    bool nDig = false;
    int fimEmail=0;

 //procura a posição do arroba para separar o local do dominio

    for(i=0;email[i]!='\0';i++)
    {
        if(email[i]=='@')
        {
            posA=i;
            contaA= contaA+1;
        }
        fimEmail = i;
    }
 //ponto final não pode ser o primeiro caractere nem o ultimo da parte local
 //pos@=-1 significa que não foi colocado @
    if(email[0]=='.' || email[posA-1] == '.' || posA==-1)
    {
        return(false);
    }
// O email só pode ter um separador entre local e dominio
    if(contaA!=1)
    {
        return(false);
    }
// Procura algum caractere especial não permitido no local
    for(i=0;i<posA;i++)
    {
        carac = email[i];
        if((carac<65 || carac > 90) && (carac< 97 || carac > 122) && (carac<48 || carac>57) )
        {
            for(j=0;j<21;j++)
            {
                if(email[i]==permitidos[j])
                {
                    chValido = chValido + 1;
                }
            }
            if(chValido == 0 )
            {

                achouInvalido = true;
            }
            chValido = 0;
        }
    }
// testa se foi encontrao no local um caractere não permitido
    if(achouInvalido == true)
    {
        return(false);
    }

//A partir daqui é feita a validação do dominio

//Checa se o hifen é o primeiro ou último caractere do dominio
    if(email[posA+1]=='-' || email[fimEmail]=='-')
    {
         return(false);
    }

//Checa se todos os caracteres do dominio são numeros
    for(i=posA+1 ; email[i]!='\0' ; i++)
    {
        carac = email[i];
        if(carac<48 || carac > 57)
        {
            nDig = true;
        }
// checa se co caractere percorrido é permitido
        if((carac<48 || carac > 57) && (carac< 97 || carac > 122) && (carac<48 || carac>57) && email[i]!= '-')
        {
            return(false);
        }
    }
//retorna falso se não encontrar nenhum caractere que não seja um digito
    if(nDig==false)
    {
        return(false);
    }

    return(true);
}


void Email::setEmail(string email) throw(invalid_argument)
{
    bool emailVal;

    emailVal=validar(email);
    if(emailVal==false)
    {
        throw invalid_argument("\nEndereco de Email em formato invalido\n");
    }
    this->email=email;
}


 /*------------------------------------------------------------Métodos da classe Senha-------------------------------------------------------------*/



 void Senha::validar(string senha) throw (invalid_argument)
 {

     bool achouReq;
     int  numeroChar = 8;

     numeroChar = contaChar(senha);
     achouReq = procuraChar(senha);
     if (achouReq == false || numeroChar !=8){
         throw invalid_argument("\n A senha deve possuir pelo menos um digito, um caractere Maiusculo e um minusculo\n");
     }

 }

 int Senha::contaChar(string senha)
 {
    int i;

    for(i=0;senha[i]!='\0';i++);

    return(i);
 }

 bool Senha::procuraChar(string senha)
 {
     int i;
     bool achouDig = false;
     bool achouMai=false;
     bool achouMin=false;
     int carac;

     for(i=0; i<8; i++)
     {
         carac=senha[i];

         if(65<=carac && carac<=90)
         {
             achouMai = true;
         }
         if(48<=carac && carac <= 57)
         {
             achouDig = true;
         }
         if(97<=carac && carac <= 122)
         {
             achouMin = true;
         }
     }

     if(achouMai == true && achouMin == true && achouDig == true)
     {
         return(true);
     }
     else {
         return(false);
     }

 }

 void Senha::setSenha(string senha)
 {
     validar(senha);
      this->senha = senha;
  }
/*-----------------------------------------------------------------------------------------------------------------------------*/
                           //---------------Métodos da classe TextoDeDefinição------------------//

 bool TextoDef::validar(string texto)

{
    int i;

    for(i=0; texto[i]!= '\0'; i++);

    if( i==0 || i>=30)
    {
       return(false);
    }
    else
    {
       return(true);
    }
}



 void TextoDef::setTexto(string texto) throw (invalid_argument)
 {
    bool texVal;

    texVal = validar(texto);

    if (texVal == false)
    {
        throw invalid_argument("\n Tamanho invalido de texto ! \n O texto deve conter de 1 a 30 caracteres \n");
    }
    this->texto = texto;
 }
/*------------------------------------------------------------------------------------------------------------------------------*/
                           //------------------- Métodos da classe Idioma----------------------//

bool Idioma::validar(string idioma)
{
    if(idioma != "ENG"  && idioma != "FRA"   && idioma != "GER" && idioma != "ITA"  && idioma != "POR" && idioma != "SPA" )
    {
        return(false);
    }
    else
    {
        return(true);
    }
}


void Idioma::setIdioma(string idioma) throw (invalid_argument)
{
    bool idiomaVal;

    idiomaVal = validar(idioma);

    if(idiomaVal==false)
    {
        throw invalid_argument("\n Idioma não reconhecido ! Os idiomas reconhecidos são:\n ENG;\n GER \n FRA \n ITA \n POR \n SPA \n ");
    }
    this->idioma = idioma;

}
/*------------------------------------------------------------------------------------------------------------------------------*/
                               //-----------------Métodos da classe de termo   ------------------ //

bool ClasseDeTermo::validar (string claTer)
{

    if(claTer != "PT" && claTer != "NP")
    {

        return(false);
    }
    else
    {
        return(true);
    }
}


void ClasseDeTermo::setClasse(string claTer) throw (invalid_argument)
{

    bool classeVal;
    classeVal = validar(claTer);

    if(classeVal == false)
    {
        throw invalid_argument("\n Classe de termos não reconhecida \n");
    }

    this->claTer = claTer;
}
/*-------------------------------------------------------Métodos da classe Endereço----------------------------------------------------------------*/

void Endereco::validar(string endereco) throw (invalid_argument)
 {

     int i, carac;
     bool apenasLetras = false;

     for(i=0; endereco[i]!= '\0'; i++)//Verifica o tamanho da string de endereco.
     {
         // As strings terminam com \0
         if(i==tamEndereco)
         {
             // se i = 20, o endereco tem mais de tamEndereco caracteres, pois i começa em zero
             throw invalid_argument("O endereco nao pode conter mais de 20 caracteres");
         }
     }

     if(endereco[0] == 32)
     {

         throw invalid_argument("Espaco em branco no inicio do endereco");

     }

     if(endereco[i-1] == 32)
     {

         throw invalid_argument("Espaco em branco no final do endereco");

     }

     for(i=0; endereco[i]!='\0'; i++) //Verifica se ha dois espaços em brancos ou mais consecutivos e lanca excessao.
     {
         if(endereco[i] == ' ')
         {


             if(endereco[i+1] == ' ')
             {

                 throw invalid_argument("Dois ou mais espacos em branco no endereco.");

             }
         }
 }

              for(i=0; endereco[i]!='\0'; i++)//Verifica se a string endereco so tem letras e espaco em branco.
             {
                 carac=endereco[i];

                 if(carac==32 || (65<=carac && carac<=90) || (97<=carac && carac <= 122))
                 {
                     apenasLetras = true;
                 }

             }
              if(apenasLetras != true){
                 throw invalid_argument("Ha caracteres diferente de letras.");
              }

}

 void Endereco :: setEndereco(string endereco) throw (invalid_argument)
 {

     validar(endereco);
     this->endereco = endereco;

 }


