#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
// #include <map>
#include <time.h>

using namespace std;

int main(void)
{
    int n;
    
    cout << "Digite o tamanho do vetor desejado \n";
    cin >> n;
    // cout << "O tamanho digitado foi " << n << "\n";
    int vetor[n];
    for (size_t i = 0; i < n; i++)
    {
        vetor[i] = rand();
        cout << "Posição " << n <<  " preenchido com o valor: " << vetor[i] << "\n";
        
    }
    
    return 0;
}