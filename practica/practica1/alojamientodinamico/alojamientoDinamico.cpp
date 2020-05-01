#include<iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
 using namespace std;

 struct persona{
   char nombre[25];
   int edad;
   char id[10];

 };


 int main(int argc, char const *argv[]){
   int a;
   ifstream archivo;
   string s;
   int aux;
   int aux2;
   int lenght;
cout << "ejercicio 1" << endl;
cout << "ejercicio 2" << endl;
cin>>a;
switch (a) {
  case 1:
  {
    struct persona *persona1, *persona2;
    persona1= new persona();
    cout<<"dame el nombre de la persona"<<endl;
    cin>>persona1->nombre;
    cout<<"dame la edad"<<endl;
    cin>>persona1->edad;
    cout<<"dame el numero de identidad"<<endl;
    cin>>persona1->id;
    persona2= new persona();
    cout<<"dame el nombre de la  persona"<<endl;
    cin>>persona2->nombre;
    cout<<"dame  la edad"<<endl;
    cin>>persona2->edad;
    cout<<"dame el numero de identidad"<<endl;
    cin>>persona2->id;

    cout<<persona1->nombre<<" "<<persona1->edad<<" "<<persona1->id<<endl;

    cout<<persona2->nombre<<" "<<persona2->edad<<" "<<persona2->id<<endl;

    delete persona1;
     delete persona2;
  break;
}
  case 2:{

  archivo.open("memoriaDinamica.txt",ios::in);
  if (archivo.fail()) {
    cout<<"no se pudo leer"<<endl;
    exit(1);
  }
  while (getline(archivo, s)){
    lenght = s[0]-48;
    aux=lenght*2;

  }

  for (int i = 0; i < aux+2; i++) {

    if (i>0 && i%2==0) {
        aux2= s[i]-48;
         cout << aux2*2 << endl;


     }
   }
     archivo.close();
 break;
}
}
 return 0;
}
