#include <iostream>
#include <math.h>

using namespace std;
int main(){
   double a,b,c,X1,X2;
    a=0;
    b=0;
    c=0;

cout << "Calculando la Formula Cuadratica." << endl;
cout << "Dame A" << endl;
cin >> a;
cout << "Dame B" << endl;
cin >> b;
cout << "Dame C"<< endl;
cin >> c;
cout << endl;

//FUNCION,OPERACION

X1 = ((-1*b)+(sqrt((pow(b,2)-((4*a)*c)))))/(2*a);
X2 = ((-1*b)-(sqrt((pow(b,2)-((4*a)*c)))))/(2*a);

cout << "X1 Es"<< endl;

cout << X1;
cout << endl;
cout << "X2 Es"<< endl;
cout << X2;

cout << endl;
    system("pause");
} 
