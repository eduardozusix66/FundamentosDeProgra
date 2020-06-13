#include "iostream"
using namespace std;

//defino las funciones y sus tipo de variables
int calcmcd(int,int);
void calcnuevahora(int,int,int);
bool esbisiesto(int);
int diasdelmes(int ,int,int );
void fechasiguiente(int ,int , int);


int main(){
  //declaro el numero del selector de ejercicio
  int ejseleccionado;
 
      cout << "Escribe el Numero del ejercicio que deseas probar!"  << endl;
      cin >> ejseleccionado;/* code */

      switch (ejseleccionado)
      {
      case 1:
          //declaro los numeros que obtendre como argumento
          int numero1, numero2;
          cout << "Ingresa el Primer Numero para el mcd" << endl;
          cin >> numero1;
          cout << "Ingresa el Segundo Numero para el mcd" << endl;
          cin >> numero2;
          //Imprimo en consola el resultado del mcd de los numeros dados, llamando a la funcion y asignandole los valores.
          cout << "El MCD de " << numero1 << " y " << numero2 << " es " << calcmcd(numero1, numero2) << endl;
          break;

      case 2:
          //declaro los numero que obtendre como argumento
          int hh, mm, ss;
          cout << "Ingresa la hora de formato 24 Horas" << endl << endl;
          cout << "Ingresa la Hora | HH " << endl;
          cin >> hh;
          cout << "Ingresa los minutos | mm" << endl;
          cin >> mm;
          cout << "Ingresa los segundos | ss" << endl;
          cin >> ss;
          //Imprimo en consola la hora ingresada.
          cout << "La hora ingresada es  :  " << hh << ":" << mm << ":" << ss << endl;
          calcnuevahora(hh, mm, ss);
          break;

      case 3:
          //declaro los numeros que obtendre como argumento
          int year;
          cout << "Dame el numero de anio" << endl;
          cin >> year;
          esbisiesto(year);
          break;

      case 4:
        //declaro los numero que obtendre como argumento
        int dd, mmes, aa;
        cout << "Ingresa la fecha segun el formato" << endl << endl;
        cout << "Ingresa el dia | dd " << endl;
        cin >> dd;
        cout << "Ingresa los meses | mm" << endl;
        cin >> mmes;
        cout << "Ingresa los anios | aa" << endl;
        cin >> aa;
         cout << endl;
        //Imprimo en consola la hora ingresada.
        fechasiguiente(aa, mmes, dd);
        break;

      default:
          cout << "Esa opcion no esta disponible!" << endl;
          break;
      }
  
  


  
}

//METODOS Y FUNCIONES ----------------------------------------------------

int calcmcd (int nm1,int nm2){

    //declaro la variable donde se deposita el resultado
    int resultado1;
  
  //creo el ciclo for para obtener el mcd de ambos numeros.
    for(int i=1;i<=nm1;i++){
        if((nm1%i==0)&&(nm2%i==0)){
            resultado1 = i;
        }
    }

  // retorno el resultado obtenido de la funcion
  return resultado1;

}

void calcnuevahora(int hora,int minu,int seg){

 //si los segundos son mayores o iguales a 59 avanzamos un minuto en el reloj
 if (seg >= 59)
 {
   seg = 0;
   
    //si los minutos son mayores o iguales a 59 avanzamos una hora en el reloj
    if (minu >= 59)
    {
      minu = 0;
  
      //si las horas son mayores o iguales a 23 avanzamos un dia y el reloj reinicia.
      if (hora >= 23)
      {
        hora = 0;

         //Imprimo en consola que el dia supero las 24 horas
        cout  << "Avanzamos un dia porque el reloj finalizo." <<endl;
      }
      else
      {
        hora+=1;
      }
    }
    else
    {
      minu+=1;
    }
 }
 else
 {
   seg+=1;
 }
 
 cout << "La hora un segundo despues es  :  "<< hora<<":" << minu<<":" <<seg<< endl;
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

int diasdelmes(int mesrec,int year,int daycin){
  int dias;

    if (mesrec >= 1 && mesrec <= 12)
    {
       switch (mesrec)
      {
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
        dias = 31;
        if (daycin > 31)
        {
          cout<<"La fecha que has ingresado es erronea o invalida!.";
          exit (0);
        }
        
        break;

      case 4:
      case 6:
      case 9:
      case 11:
       dias = 30;
       if (daycin > 30)
        {
          cout<<"La fecha que has ingresado es erronea o invalida!.";
          exit (0);
        }
        break;

      case 2:
       
         if (esbisiesto(year)==1)
         {
           dias = 29;
             if (daycin > 29)
              {
                cout<<"La fecha que has ingresado es erronea o invalida!.";
                exit (0);
              }
         }
         else
         {
           dias = 28;
             if (daycin > 28)
              {
                cout<<"La fecha que has ingresado es erronea o invalida!.";
                exit (0);
              } 
         }
         
         
        break;
      }

    }
    else
    {
      cout<<"La fecha que has ingresado es erronea o invalida!.";
      exit (0);
    }
    
  
    

    return dias;
}

void fechasiguiente(int anio,int mesre, int diare){
 int maxday = diasdelmes(mesre,anio,diare);

  if(diare >= maxday){
   diare = 1;
     if(mesre >= 12){
        mesre = 1;
        anio+=1;

        
      }
      else
      {
        mesre+=1;
      }
  }
  else
  {
    diare+=1;
  }
  
   cout << "La fecha del dia siguiente es  :  "<< diare<<" / " << mesre<<" / " <<anio<< endl;

}
