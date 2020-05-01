#include <iostream>

  using namespace std;
    struct doble{
      int id;
      char nombre[30];
      int cantidad;
      float precio;
      doble *link;


};

int main() {
  struct doble *c1, *c2;
  c1=NULL;
  c2=NULL;
int opc;
do {
  c1=new struct doble;

  cout << "dame el id" << endl;
  cin>>c1->id;
  cout<<"dame el nombre"<<endl;
  cin>>c1->nombre;
  cout << "dame la cantidad" << endl;
  cin>>c1->cantidad;
  cout<<"dame el precio "<<endl;
  cin>>c1->precio;



  c1->link=c2;

  c2=c1;

  cout << "deseas agregar otra caja 1(s) 2(n)" <<endl;
  cin>>opc;

} while(opc==1);
c2=c1;
  while (c1!=NULL) {
  cout << c1->id << endl;
  cout << c1->nombre << endl;
  cout << c1->cantidad << endl;
  cout << c1->precio *.85 << endl;
  c1=c2->link;

  delete c2;
  c2=c1;
}


  return 0;
}
