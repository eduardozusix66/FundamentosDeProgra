#include "iostream"
using namespace std;

//defino la funcion y su tipo de variable
void printseparator();

int main()
{
  //Declaro las variables iniciales del programa
  int numeroadivinado;
   //Aca guardo el numero secreto
  int numeritosecreto = 43; 

  cout << "Bienvenido al juego de el numero magico!" << endl;
  printseparator();

  cout << "Comienza a Adivinar! Tendras 5 Intentos a partir de ahora!" << endl;

 //Declaro el ciclo for donde se te asigna un maximo de 5 intentos
  for (int i = 1; i <= 5 ; i++)
  {
  
       cout << "Escribe un numero del 1 al 100!" << endl;
     printseparator();

     cin >> numeroadivinado;
     
     //Si el numero es mayor, te doy una pista 
    if (numeroadivinado > numeritosecreto)
    {
       printseparator();
      cout << "Vas bien pero el numero ingresado es mayor al numero secreto!... vuelve a intentar" << endl;
      cout << "Te quedan solamente  "<< 5 -i << "  Intentos!!" << endl; 
    }

    //Si el numero es menor, te doy una pista 
    else if (numeroadivinado < numeritosecreto)
    {
       printseparator();
      cout << "Vas bien pero el numero ingresado es menoor al numero secreto!... vuelve a intentar" << endl;
      cout << "Te quedan solamente  "<< 5 -i << "  Intentos!!" << endl; 
    }
    //Si el numero es igual, significa que ganaste!
    else if (numeroadivinado == numeritosecreto)
    {
      printseparator();
      cout << "Felicidades! Has Adivinado el numero secreto "<< numeritosecreto << endl;
      cout << "Te quedaban "<< 5 -i << "  Intentos, Buen trabajo!!" << endl;
       
       //cierro el ciclo si ganas
      break;
    }

    
     
  }
  
  // si el ciclo termina compruebo tu respuesta si no es correcta perdiste
  if (numeroadivinado != numeritosecreto)
  {
    printseparator();
       cout << "No tienes mas intentos, y no has adivinado..." << endl;
       cout << "Lo lamento mucho! vuelve a intentar, hasta la proxima." << endl;
  }
  


 
}

//Metodo para imprimir linea separadora (estetica solamente)
void printseparator()
{
  cout << "----------------------------------------------------------" << endl;
}


