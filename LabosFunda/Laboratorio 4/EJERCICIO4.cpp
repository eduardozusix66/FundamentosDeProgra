#include "iostream"

using namespace std;
int main(){
    int numero,res;
    string cadena;

    cout << "Dame una palabra: " << endl;

    cin >> cadena;

    numero = cadena.length();

    cout << "La palabra tiene "<<numero <<" Caracteres" << endl;
    if (numero%2 == 0)
    {
        cout << "Es una cadena con caracteres Par";
    }
    else 
    {
      cout << "Es una cadena con caracteres Impar";
    }
    
} 