#include "iostream"

using namespace std;
int main(){
    int numero,res;
    string cadena, caracterinicial;

    cout << "Dame una palabra: " << endl;

    cin >> cadena;

    if (cadena.front() == cadena.back())
    {
        cout << "Inicia y finaliza con el mismo Caracter";
    }
    else 
    {
      cout << "No Inicia y finaliza con el mismo Caracter";
    }
    
} 