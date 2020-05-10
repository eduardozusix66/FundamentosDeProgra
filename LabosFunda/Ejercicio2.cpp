#include <iostream>
#include <math.h>

using namespace std;
int main(){
    double radio,area,perimetro,PI;
    radio=0;
    area=0;
    perimetro=0;

    PI= 3.14159;

cout<< "DAME EL RADIO" << endl;
    cin >> radio;

    //OPERACION
    area = PI*  (radio*radio);
    perimetro= 2*PI*radio;

   cout<< "EL AREA ES:" << endl;
    cout << area;
    cout << endl;

    cout<< "EL PERIMETRO ES:" << endl;
    cout<<perimetro;


cout << endl;
    system("pause");
} 
