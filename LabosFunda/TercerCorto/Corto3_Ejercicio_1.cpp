#include "iostream"
using namespace std;

//defino la funcion y su tipo de variable
void printseparator();
double calcularsalariototal(int, int);
double calcularsalarioreal(double);

int main()
{
  bool continueadding=true;
  while (continueadding == true)
  {
    //declaro los numeros que obtendre como argumento
    int horasnormales, horasextras;

   //pido al usuario que ingrese la informacion de empleado
    cout << endl << "Calcular el salario del Empleado" << endl;
    printseparator();
    cout << "Bienvenido, por favor ingresa el numero de horas  laboradas (sin horas extra) :" << endl;
    cin >> horasnormales;
    printseparator();
    cout << "Por favor ingresa el numero de horas Extras laboradas :" << endl;
    cin >> horasextras;

    //Llamo a la funcion de calcular el salario real, donde le ingreso la funcion de obtener salario total.
    calcularsalarioreal(calcularsalariototal(horasnormales, horasextras));

    printseparator();
    
    cout<< "Quieres agregar el salario de otro empleado?" << endl;
    cout<< "Escribe 1 si quieres agregar  o cualquier otro caracter si deseas salir." << endl;
    cin >> continueadding;
    if (continueadding != 1)
    {
     continueadding == 0;
    }   
 }
}

//Metodo para imprimir linea separadora (estetica solamente)
void printseparator()
{
  cout << "----------------------------------------------------------" << endl;
}

//metodo para calcular salario total ingresando las horas trabajadas
double calcularsalariototal(int horasn, int horasex)
{

  double pagonormal = horasn * 1.75;
  double pagoextra = horasex * 2.50;

  double salariototal = pagonormal + pagoextra;

  printseparator();
  cout << "El Salario total sin descuentos es de : $" << salariototal << endl;


  return salariototal;
}

//metodo para calcular salario real aplicando descuentos
double calcularsalarioreal(double total)
{

  double totalreal, segurosocial, afp, renta;

  //verifico cada tipo de descuento.
  segurosocial = total * 0.04;
  afp = total * 0.0625;
  renta = total * 0.1;

  //si el salario es mayor o igual a 500 se aplica la renta, si no solamente seguro y afp.
  if (total >= 500)
  {
    total = total - (segurosocial + afp + renta);
  }
  else
  {
    total = total - (segurosocial + afp);
  }

  printseparator();
  cout << "El Salario Real del empleado con descuentos es de : $" << total << endl;
  printseparator();
  return total;
}