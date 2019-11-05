#include <iostream>
#include <conio.h>
using namespace std;

int num_matriz(int *x);

int main() {
  int **x;

  cout << "ingrese un numero del 3 al 11" << endl;
  cin >> x;

  if (x > 3 && x < 11){

  }
  else {
    cout << "Esta fuera del rango" << x << endl;
  }

  int cont = 0;
  int ix = 0;


  return 0;
}
