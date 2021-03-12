#include <iostream>
using namespace std;

int main() {
  int a,b,o;

  do{
    cout << "\n\nCALCULADORA\n" << endl;
    cout << "1. Sumar" << endl;
    cout << "2. Restar"<< endl;
    cout << "3. Multiplicar"<< endl;
    cout << "4. Dividir" << endl;
    cout << "5. Salir\n" << endl;

  cout << "o ";
  cin>>o;

  if (o==1){
  cin>>a;
  cin>>b;
  cout << "La Suma es: "<< a+b <<endl;
  }
  if (o==2){
  cin>>a;
  cin>>b;
  cout << "La Resta es: "<< a-b <<endl;
  }
  if (o==3){
  cin>>a;
  cin>>b;
  cout << "La Multiplicacion es: "<< a*b <<endl;
  }
  if (o==4){
  cin>>a;
  cin>>b;
  cout << "La Division es: "<< a/b <<endl;
  }
  
  } while ( o != 5 );

  system("pause");
}