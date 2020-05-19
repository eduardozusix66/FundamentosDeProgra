#include <iostream>
#include <math.h>

using namespace std;
int main(){

    string nombre;
    int cantidad;
    double precio, totalgastado;


cout << "Dame el nombre del producto" << endl;
cin >> nombre;
cout << endl;


cout << "Dame el precio" << endl;
cin >> precio;
cout << endl;


cout << "Dame la cantidad que compraste" << endl;
cin >> cantidad;
cout << endl;

//operacion
totalgastado = cantidad*precio;

cout << "El total que gastaste fue:   ";
cout << totalgastado << " $";
cout << "en " <<  cantidad << " " << nombre;
cout << endl;
    system("pause");
} 
