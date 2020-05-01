#include <iostream>
#include <stdlib.h>

using namespace std;


void busqueBinaria(int clave, int n, int A[]);
int main(int argc, char const *argv[]) {
  int array[20];
  int busq;
  cout << "coloca una lista de numeros de manera acendente " << endl;
  for (int i = 0; i <20; i++) {
  cin>>array[i];

}
cout <<"dame el numero buscar "<<endl;

cin>>busq;

busqueBinaria(busq,20,array);


  return 0;
}


void busqueBinaria(int clave, int n, int A[]) {
  int inf= 0, sup = n -1;
  int medio;
  do {
    medio = (inf+ sup) / 2;
    if (clave > A[medio]) {
      inf= medio + 1;
    }if (clave < A[medio]) {
      sup = medio -1;}
    } while (clave != A[medio] && inf<= sup);
    if (clave == A[medio]) {
      cout<< " El valor -> " << A[medio] << " si se encuentraenla Lista"<<endl;
    } else
    cout<< " El valor -> " << clave << " no esta en la lista"<<endl;
  }
