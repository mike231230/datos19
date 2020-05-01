#include<iostream>

using namespace std;

int main() {
  float array[3][2];
  int a=0;

  cout << "ejercicios \n" <<"ejercicio 1 \n"<<"ejercicio 2 \n" ;
  cin>>a;
  switch (a) {
    case 1:
      for (int i = 0; i <3; i++) {
        for (int j = 0; j <2 ; j++) {
        cout <<"dame un numero"<< endl;
        cin>>array[i][j];

        }
      }
      for (int i = 0; i < 3; i++) {
        cout<< endl;
        for (int j = 0; j < 2; j++) {
          cout<<"|"<<array[i][j] <<"|";
        }
      }
      cout<< endl;
     break;

    case 2:
      struct celular{
        char modelo[25];
        char marca[25];
        int precio;

      }micelular[5];
      for (int i = 0; i < 5; i++) {
        cout<<"dame un modelo"<< endl ;
        cin>>micelular[i].modelo;
        cout<<"dame una marca"<< endl ;
        cin>>micelular[i].marca;
        cout<<"dame un precio"<< endl ;
        cin>>micelular[i].precio;

      }
      for (int i = 0; i < 5; i++) {
        cout<< "mi celular es "<<micelular[i].modelo <<" marca : "<< micelular[i].marca << " precio: "
        <<micelular[i].precio << endl ;
      }

      break;

      default: ;
      break;

}



  return 0;
}
