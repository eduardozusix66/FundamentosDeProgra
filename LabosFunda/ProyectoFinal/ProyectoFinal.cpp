#include <iostream>
#include <string>
#include <string.h>

using namespace std;
const int longCad = 20;

struct costoPorArticulo
{
    char nombreArticul[longCad + 1];
    int cantidad;
    float precio;
    float costoPorArticulo;
};

//declaracion de metodos y funciones para la ejecucion del programa.
void llenardatosarticulo(costoPorArticulo *completo, int articulos);
float costototaldearticulo(int, float);
void mostrardatos(costoPorArticulo *completo, int articulos);
float retornarcostototal(costoPorArticulo *completo, int);
void printline();

int main()
{
    char c;
    string cad;
    int cantidaddearticulos;
    //cantidad de articulos a incluir
    cout << "Buenas Tardes cuantos articulos va comprar el dia de hoy?";
    cin >> cantidaddearticulos;
    cin.ignore(100, '\n');
    costoPorArticulo completo[cantidaddearticulos];

    //llamar funciones para llenar datos y mostrarlos
    llenardatosarticulo(completo, cantidaddearticulos);
    mostrardatos(completo, cantidaddearticulos);

    cout << "La cantidad total a pagar es: $" << retornarcostototal(completo, cantidaddearticulos) << endl;
    printline();
}

//funcion que lee los datos sobre el nombre, la cantidad y el precio unitario de cada artículo y los incorpore al arreglo.
void llenardatosarticulo(costoPorArticulo *completo, int cantidad)
{
    char c;
    string cad;
    cout << "Continuemos, Digita Nombre, Cantidad y Precio de cada articulo porfavor:" << endl;
    for (int i = 0; i < cantidad; i++)
    {
        cout << "Nombre completo del articulo: " << endl;
        getline(cin, cad, '\n');
        strncpy(completo[i].nombreArticul, cad.c_str(), longCad);
        completo[i].nombreArticul[longCad] = '\0';
        cout << "Cantidad comprada: " << endl;
        cin >> completo[i].cantidad;
        cout << "Precio por Unidad: " << endl;
        cin >> completo[i].precio;

        //llamo a la funcion para llenar el costo total del articulo.
        completo[i].costoPorArticulo = costototaldearticulo(completo[i].cantidad, completo[i].precio);

        cin.ignore(100, '\n');
        printline();
       
    }
}

//función que calcule el costo total por artículo.
float costototaldearticulo(int cantidadArticulo, float precioArticulo)
{
    float costoTotalArticulo;
    costoTotalArticulo = cantidadArticulo * precioArticulo;
    return costoTotalArticulo;
}

//Una función que despliegue el contenido del arreglo. Mostrando los cuatro datos de la estructura para cada artículo.
void mostrardatos(costoPorArticulo *completo, int cantidad)
{
    cout << "Tu Factura de Compra es: " << endl;
    printline();

    cout << "  Nombre Articulo  |   Cantidad   |   Precio   |  CostoT" << endl;
    printline();
    for (int i = 0; i < cantidad; i++)
    {
        cout << i + 1 << ".  ";
        cout << completo[i].nombreArticul << "         ";
        cout << completo[i].cantidad << "Unidades     $";
        cout << completo[i].precio << "           $";
        cout << completo[i].costoPorArticulo << endl;
    }
    printline();
}

//función que retorne el costo total de la compra, que es la suma de los costos de cada artículo. Este valor se desplegará en la función main.
float retornarcostototal(costoPorArticulo *completo, int cantidad)
{
    float totalapagar;

    for (int i = 0; i < cantidad; i++)
    {
        totalapagar += completo[i].costoPorArticulo;
    }

    return totalapagar;
}

//solo estetica de cout consola
void printline()
{
    cout << "------------------------------------------------------------" << endl;
}
