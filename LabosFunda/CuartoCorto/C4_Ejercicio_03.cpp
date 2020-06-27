#include <iostream>

using namespace std;
void printseparator();
double comprobarnotas(double, double, double, double, double);
double rellenarArray(int);
int main()
{

    int numerodealumnos;

    cout << "porfavor dame el numero de alumnos" << endl;
    cin >> numerodealumnos;
    printseparator();

    //mando a la funcion el numero de alumnos n
    rellenarArray(numerodealumnos);
    
}

double rellenarArray(int numerodealumnos)
{
    //declaro el array alumnos n y las 5 calificaciones que tendra cada uno de estos
    double notas[numerodealumnos][5];

    //ciclo que recorre los numeros n de alumnos
    for (int alumno = 0; alumno < numerodealumnos; alumno++)
    {
        cout << "Notas del Alumno Numero " << alumno + 1 << endl;

        //ciclo que recorre el numero de notas
        for (int nota = 0; nota < 5; nota++)
        {

            cout << "Dame la nota numero " << nota + 1 << endl;
            double notaX = 0;
            cin >> notaX;
            //guardo en la celda especifica la nota de x alumno
            notas[alumno][nota] = notaX;
        }
        printseparator();
    }

    printseparator();

    //ciclo que imprime el resultado de cada alumno
    for (int i = 0; i < numerodealumnos; i++)
    {
        //mensaje que imprima la calificacion y llama el metodo para saber si aprobo o reprobo
        cout << "Calificacion final de alumno "<< i+1 << " : "<< comprobarnotas(notas[i][0], notas[i][1], notas[i][2], notas[i][3], notas[i][4]) << endl;
        printseparator();
    }
}

//metodo que comprueba el porcentaje d elas 5 notas y verifica si aprobaste o no
double comprobarnotas(double nota1, double nota2, double nota3, double nota4, double nota5)
{

    double notafinal = nota1 * 0.2 + nota2 * 0.2 + nota3 * 0.2 + nota4 * 0.2 + nota5 * 0.2;
    if (notafinal < 7)
    {
        cout << "Este alumno reprobo.  ";
    }
    else
    {
        cout << "Este alumno Aprobo!!.  ";
    }

    return notafinal;
    
    
}

//METODO SOLO PARA DAR MEJOR APARIENCIA DE COUT
void printseparator()
{
    cout << "-----------------------------------------------------------" << endl;
}