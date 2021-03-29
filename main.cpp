#include <iostream>
using namespace std;

void menu();
void calculadora(int, int, int);

int main() {
  menu();
}

void menu(){
  int opcion, primerNum, segundoNum;

  do
  {
    cout << "\n\nCALCULADORA\n" << endl;
    cout << "1. Sumar  \n2. Restar  \n3. Multiplicar  \n4. Dividir  \n0. Salir" << endl;
    cout << "\nOpcion: ";
    cin >> opcion;
    
    if(opcion > 0){
      cout << "Primer numero: ";
      cin >> primerNum;
      cout << "Segundo numero: ";
      cin >> segundoNum;
      calculadora(opcion, primerNum, segundoNum);
      }
  } while (opcion != 0);
}

void calculadora(int opcion, int primerNum, int segundoNum){
  double resultado;
  if (opcion == 1)
    resultado = primerNum + segundoNum;
  if (opcion == 2)
    resultado = primerNum - segundoNum;
  if (opcion == 3)
    resultado = primerNum * segundoNum;
  if (opcion == 4)
    resultado = (double)primerNum / (double)segundoNum;  
  cout << "Resultado = " << resultado;
}