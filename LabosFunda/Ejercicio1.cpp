#include <iostream>

using namespace std;
int main(){
    int a,b,c,R;
    a=0;
    b=0;
    c=0;

    cout << "Dame el primer numero entero" <<endl;
    cin >> a;
    cout << "Dame el primer numero entero"<<endl;
   cin >> b;
    cout << "Dame el primer numero entero"<<endl;
   cin >> c;

   //OPERACION ARIT.
    R= (a+b+c)/3;
    cout << "El promedio es: ";
    cout << R;
    cout << endl;
    system("pause");
} 
