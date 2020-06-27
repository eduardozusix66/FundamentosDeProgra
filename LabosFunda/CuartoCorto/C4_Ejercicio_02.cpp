#include <iostream>

using namespace std;
//declaracion de funciones y metodos
void printseparator();
double contaralturas(double);
double rellenarArrayYMedia(int);
double estaturas[25];

int main()
{
    int numerodealumnosenclase = 25;
    cout << "Bienvenido ingresaremos las estaturas de los alumnos." << endl;
    printseparator();

    //llamo el metodo contar alturas obteiendo la media con otra funcion que llena el array
    contaralturas(rellenarArrayYMedia(numerodealumnosenclase));
}

//obtengo la media y lleno el array
double rellenarArrayYMedia(int numerodealumnos)
{
    double mediadeestaturas = 0;

    for (int alumno = 0; alumno < numerodealumnos; alumno++)
    {
        cout << "Estatura de el alumno" << alumno + 1 << endl;
        double estaturalumno = 0;
        cin >> estaturalumno;

        mediadeestaturas += estaturalumno;
        estaturas[alumno] = estaturalumno;
        printseparator();
    }

    //el resultante es dividio para obtener el promedio
    mediadeestaturas = mediadeestaturas / 25;
    cout << "La media de estaturas es de : " << mediadeestaturas << endl;

    return mediadeestaturas;
}

//funcion de contar arirba y abajo de la media
double contaralturas(double media)
{
    int arriba,abajo;
    arriba = 0;
    abajo  =0;

   for (int alumno = 0; alumno < 25; alumno++)
    {
       if (estaturas[alumno] >= media)
       {
          arriba+=1;
       }
       else
       {
           abajo+=1;
       }
       
       
    }

    cout << arriba << " Alumnos estan arriba de la media" << endl;
    cout << abajo << " Alumnos estan abajo de la media" << endl;
}

//METODO SOLO PARA DAR MEJOR APARIENCIA DE COUT
void printseparator()
{
    cout << "-----------------------------------------------------------" << endl;
}