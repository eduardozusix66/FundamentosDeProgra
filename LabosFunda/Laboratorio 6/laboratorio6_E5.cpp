#include "iostream"
using namespace std;
void llenararreglo();


int main()
{
    cout << endl << "Iniciamos con el recorrido y llenado de datos a la inversa." << endl << "de los 100 primeros numeros enteros impares..." << endl;
    llenararreglo();
}

void llenararreglo()
{
    //contadores para crear el arreglo y recorrer el for
    int contadordeimpares = 0;
    int recorrido = 0;

    //Aqui determino la cantidad de datos para el Array segun los primeros 100 numeros enteros impares
    for (int i = 0; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            contadordeimpares++;
        }
    }

    
    cout << "se calcularon " << contadordeimpares << " numeros Impares en los primeros 100 numeros enteros."<<endl;

    //creo el array con la cantidad calculada de numeros
    int impares[contadordeimpares];

    //lleno el array con los datos en orden normal 1,3,5...
    for (int i = 0; i < 100; i++)
    {
        if (i % 2 != 0)
        {
            impares[recorrido]= i;
            recorrido++;
        }
    }

    //Genero la lista de mayor a menor de los valores.
    for (int i = 49; i >= 0; i--)
    {
        cout<< "Casilla "<< i << " -- "<< impares[i] <<  endl;
    }
    
}
