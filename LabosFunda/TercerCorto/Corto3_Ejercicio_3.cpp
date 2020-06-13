#include "iostream"
using namespace std;
//defino la funcion y su tipo de variable
bool esbisiesto(int);
int main(){
  //declaro los numeros que obtendre como argumento
  int year;
  cout << "Dame el numero de anio"  << endl;
  cin >> year;
  esbisiesto(year); 
}
bool esbisiesto (int yearobtenido){
  //declaro la variable donde se deposita el resultado
  bool esbisiesto;
    
  //si el año es divisible entre 400 es bisiesto
  if(yearobtenido%400 == 0)
  {
    esbisiesto = true;
     cout << "Si es bisiesto"  << endl;
  }
  else
  {
    //si el año es divisible entre 4 pero no entre 100 es bisiesto
    if (yearobtenido%4==0 && yearobtenido%100 !=0)
    {
      esbisiesto = true;

        cout << "Si es bisiesto"  << endl;
    }
    else
    {
      esbisiesto = false;
      cout << "No es bisiesto"  << endl;
    }      
}
// retorno el resultado obtenido de la funcion
  return esbisiesto;

}