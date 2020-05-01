#include <iostream>

using namespace std;

  struct lista{
    char nombre[30];
    int contador = 1;
    lista *link;

  };



int main() {
  struct lista *c1, *c2;
  c1=NULL;
  c2=NULL;
int opc;
  do {
    c1=new struct lista;
    c1->contador++;
    cout << c1->contador << endl;
    c1->link=c2;

    c2=c1;

    cout << "deseas agregar otra caja 1(s) 2(n)" <<endl;
    cin>>opc;


  } while(opc==1);
  c2=c1;
  while (c1!=NULL) {


    c1=c1->link;
    cout<< c1->contador++ <<endl;
  }
  c1=c2;
  while (c1!=NULL) {
    c1=c2->link;
    delete c2;
    c2=c1;

  }


  return 0;
}
