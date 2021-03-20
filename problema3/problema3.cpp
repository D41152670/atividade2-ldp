#include <iostream>
#include <string>
#include <algorithm>
// Declare std namespace
using namespace std;
// função que reverte a string
string reverse(string const &s)
{
    string rev(s.rbegin(), s.rend());
    return rev;
}
//  
int main()
{
    // declara a string 
    string normalString;
    cout << "Digite uma palavra \n";
    // recebe o valor da string
    cin >> normalString;
    //  sequence of characters as an object of class 
    std::string s( normalString );
    // realiza a reversão da string declarada
    s = reverse(s);
    // compara se a string normal e a reversa são parecidas
    if(normalString == s){
        cout << "String normal: " << normalString << " String reversa: " << s << " é um palindromo \n";
    } else {
        cout << "String normal: " << normalString << " String reversa: " << s << " Não é um palindromo \n";
    }
    return 0;
}