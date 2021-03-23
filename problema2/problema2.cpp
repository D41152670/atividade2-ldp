#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <map>

using namespace std;

// Função para contabilizar a quantidade de vezes que uma letra é mencionada numa frase
string letraFrequente( const string& text, int &mx )
{
    map <char,int> freq;
    for ( char c : text ) 
        if ( isalpha( c ) ) 
            freq[tolower(c)]++;
            mx = 0;

    for ( auto p : freq ) 
        if ( p.second > mx ) 
            mx = p.second;
            string result;
    
    for ( auto p : freq ) 
        if ( p.second == mx ) 
        result += p.first;
    
    return result;
}

// 
int main(){
    // irá contabilizar a quantidade de letras de uma frase
    int resultString;
    // Irá armazenar cada palavra convertendo em string (simples de capturar seu tamanho)
    string groupString, test;
    // 
    char * pch, str[60];
    // 
    cout << "Digite uma frase \n";
    // Recebe a string de forma completa
    getline(cin, test);
    // converte uma string para char
    strcpy(str, test.c_str());
    // Realiza um split da string digita quebrando a em varias palavras isoladas
    pch = strtok ( str, " ,.-" );
    // Laço de repetição que irá quebrando a frase em palavras
    while (pch != NULL)
    {
        // string recebe o valor quebrado do pch
        groupString = pch;
        // printa a quebra da frase
        printf(" %s\n", pch);
        // irá adicionar null ao PCH quando não houver mais palavras
        pch = strtok (NULL, " ,.-");
        // realiza o somatorio de cada tamanho de palavra capturando o total da frase
        resultString = resultString + groupString.length();
    }
    // printa o total de letras na frase
    printf("A frase contem %d letras \n\n", resultString);
    // irá armazenar o número de vezes que a letra apareceu
    int mx;
    // inicia a variavel modes recebendo o resultado da função letra frequente
    string modes = letraFrequente( test, mx );
    cout << "A letra mais comum foi: " << modes << " ( " << mx << " vezes ) \n\n";
}