#include <iostream>
using namespace std;

void relleno (float *matriz, int filas, int cols);
void imprime (float *matriz, int filas, int cols);
void imprimecabeza (float *matriz, int filas, int cols);
int main() {
  int x;

  cout << "ingrese un numero del 3 al 11" << endl;
  cin >> x;

  if (x < 3 | x > 11){
    cout << "Esta fuera del rango" << x << endl;
  }
  int filas = x+2;
  int cols = x;
  float *matriz = new float [filas*cols];
  relleno(matriz,filas,cols);
  imprime(matriz,filas,cols);
  imprimecabeza(matriz,filas,cols);


  return 0;
}
void relleno (float *matriz, int filas, int cols){
  for (size_t i = 0; i < filas; i++) {
    for (size_t j = 0; j < cols; j++) {
      matriz[i*cols+j] = (i+1)+(j+1);
    }
  }
}
void imprime (float *matriz, int filas, int cols){
  for (size_t i = 0; i < filas; i++) {
    for (size_t j = 0; j < cols; j++) {

      if (j==cols-1){
        cout << " " << matriz[i*cols+j] << endl;
      }
      else {
          cout << " " << matriz[i*cols+j];
      }
    }
  }
}
void imprimecabeza (float *matriz, int filas, int cols){
  cout << "la primera fila de la matriz es:" << endl;
  for (size_t j = 0; j < cols; j++) {
    cout << " " << matriz[0*cols + j];
  }
  float cont =0.0;
  for (size_t i = 0; i < filas; i++) {
    cont = cont + matriz[i*cols + 0];
  }
  cout << endl;
  cout << "la suma de los valores de la primera columna es:" << endl;
  cout << " " << cont << endl;
}
