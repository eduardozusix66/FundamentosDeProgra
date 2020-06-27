#include "iostream"
#include <string>
using namespace std;
void printseparator();
string codificarcadena(string);

int main()
{
    string cadenanocod;

    cout << endl
         << "BIENVENIDO AL CODIFICADOR DE CLAVE MURCIELAGO." << endl;
    cout << "Porfavor ingresa la cadena de texto que quieras codificar." << endl;
    printseparator();

    //TOMO LA LINEA DE TEXTO COMPLETA
    getline(cin, cadenanocod);

    //LLAMO LA FUNCION CODIFICAR CADENA Y MUESTRO EL RESULTADO
    cout << codificarcadena(cadenanocod) << endl;
}

//METODO SOLO PARA DAR MEJOR APARIENCIA DE COUT
void printseparator()
{
    cout << "-----------------------------------------------------------" << endl;
}

string codificarcadena(string cad)
{
    string codificada;

    //CUENTO EL NUMERO DE CARACTERES
    int recorrido = cad.length();
    //INICIO EL CICLO SEGUN LOS CARACTERES TOTALES PARA CODIFICAR
    for (int i = 0; i < recorrido; i++)
    {

        //TOMO EL CARACTER DE LA CADENA EN X POSICION
        string seleccion;
        char leerchar = cad.at(i);
        seleccion = leerchar;

        //CODIFICO EL CARACTER
        switch (leerchar)
        {
        case 'm':
            seleccion = "0";
            break;
        case 'u':
            seleccion = "1";
            break;
        case 'r':
            seleccion = "2";
            break;
        case 'c':
            seleccion = "3";
            break;
        case 'i':
            seleccion = "4";
            break;
        case 'e':
            seleccion = "5";
            break;
        case 'l':
            seleccion = "6";
            break;
        case 'a':
            seleccion = "7";
            break;
        case 'g':
            seleccion = "8";
            break;
        case 'o':
            seleccion = "9";
            break;
        default:
            break;
        }

        //AÑADO EL NUEVO CARACTER A LA CADENA CODIFICADA
        codificada = codificada.append(seleccion);
    }

    return codificada;
}