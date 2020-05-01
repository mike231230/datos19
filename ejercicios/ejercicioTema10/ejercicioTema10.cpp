#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int array[20];
  int aux;
  for (int i = 0; i < 20; i++) {
  cout<<"dame un numero"<<endl;
  cin>>array[i];
}
cout<<"dame otro numero"<<endl;
cin>>aux;

for (int i = 0; i <20; i++) {

if (aux==array[i]) {
  cout << "el numero encontrado es "<<aux <<" y esta en la posicion " << i<<endl;
}
}
  return 0;
}
