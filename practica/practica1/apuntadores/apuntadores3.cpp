//ejercio 3
#include <iostream>


using namespace std;

int main() {
  int *pointer_int,a,x=7;
  float *pointer_float, b, y=4.0;
  //el apuntador de entero se carga con la direccion de x
  pointer_int=&x;

  cout<<"el contenido de x es "<<x<<endl;
  cout<<"la direccion de x es "<<&x<<endl;
  cout<<"pointer_int contiene: "<<pointer_int<<endl;
  cout<<"pointer_int apunta a: "<<*pointer_int<<endl;
  //el apuntador de float se carga con la direccion de y
  pointer_float=&y;
  cout<<"el contenido de y es "<<y<<endl;
  cout<<"la direccion de x es "<<&y<<endl;
  cout<<"pointer_float contiene; "<<pointer_float<<endl;
  cout<<"pointer_int apunta a: "<<*pointer_float<<endl;
  // a se carga con lo que apunta pointer int;
  a=*pointer_int;
  // b se carga con lo que apunta pointer float
  b=*pointer_float;
  //desplegar a y b
  cout <<"a es = "<<a<<", b es = "<<b<<endl;

  return 0;
}
