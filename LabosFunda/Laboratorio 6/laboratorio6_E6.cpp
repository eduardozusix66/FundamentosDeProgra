#include "iostream"
using namespace std;

int main()
{
    //declaro variables de contador
    int numdedatos, buscar, repetidos;
    repetidos = 0;

    cout << "Porfavor ingresa la cantidad de datos a recolectar" << endl;
    cin >> numdedatos;
    cout << endl;

    //creo el array segun los datos del usuario
    int arreglo[numdedatos];
    //bucle para rellenar cada celda del array
    for (int i = 0; i < numdedatos; i++)
    {
        int dato;
        cout << endl
             << "Ingresa el siguiente dato de la celda" << endl;
        cin >> dato;

        //ingreso el dato obtenido en cin al array
        arreglo[i] = dato;
    }

    cout << "Que numero quieres buscar en el Arreglo de numeros?" << endl;
    cin >> buscar;

    //recorro todo el array comparando si el numero a buscar es igual a los existentes.
    for (int i = 0; i < numdedatos; i++)
    {
        if (buscar == arreglo[i])
        {   
            //si se encuentran coincidencias se almacena el valor de cuantos.
            repetidos++;
        }
    }
    cout << "El numero " << buscar << " se repite " << repetidos << " veces en el arreglo.";
}
