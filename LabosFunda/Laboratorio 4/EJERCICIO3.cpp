#include "iostream"
using namespace std;
int main(){
    int numero,res;

    cout << "Dame un numero a verificar: " << endl;

    cin >> numero;


    if (numero>=0)
    {
        if(numero == 0){
            cout << "El numero ingresado es 0";
        }
        else
        {
            cout << "Es numero positivo";
        }         
    }
    else 
    {
         cout << "no es numero Positivo";
    }   
} 