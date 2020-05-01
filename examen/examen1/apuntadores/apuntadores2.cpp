#include <iostream>


using namespace std;

int main(int argc, char const *argv[]) {
  int n=0;
  cout<<"¿Cuantos datos tiene tu arreglo?"<<endl;
  cin>>n;
  int aux=n;
  double valor=0;
  double array[aux];

  int *z;

  int suma=0;

  do {
    cout << "Dame un valor" << endl;
    cin>>valor;
    array[n-1]=valor;
    n--;


  } while(n>0);

  int may= array[0];

  while (aux >=0) {
    suma=suma+array[aux];
    if (array[aux]<array[aux+1]&& may < array[aux+1]) {
      may=array[aux+1];
    }

    aux--;
  }

    z= &suma;
    cout << "el mayor es " << may<<endl;
    cout << "la suma es " << *z <<endl;
    cout << "la direccion de suma es " << z <<endl;
    cout << "la direccion de z es " << &z <<endl;

  return 0;
}
