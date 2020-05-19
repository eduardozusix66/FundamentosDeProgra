#include "iostream"
using namespace std;
int main(){
    int numero, divisible,res;

    cout << "Dame un numero a verificar: " << endl;

    cin >> numero;

    cout << "Verificar si es divisible entre: " << endl;
    cin >> divisible;

    if (numero%divisible==0)
    {
        cout << "si es divisible entre "<< divisible;
    }
    else
    {
         cout << "no es divisible entre "<< divisible;
    }
    
} 