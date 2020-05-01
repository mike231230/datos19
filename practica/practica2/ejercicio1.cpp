#include <iostream>
#include <stdlib.h>
using namespace std;

  struct books{
    int clave_libro;
    char titulo[50];
    char autor[50];
    char categoria[50];
    books *link;
  };

void imprimelista(books *q);


int main(int argc, char const *argv[]) {
  books *p,*q;
  p=NULL;
  q=NULL;
  char opc;
      for (int i = 0; i < 5; i++) {
    q=new books;

    cout<<"Dame la clave del libro"<<endl;
    cin>>q->clave_libro;
    cout << "Dame el titulo" <<endl;
    cin>>q->titulo;
    cout<<"Dame el autor"<<endl;
    cin>> q->autor;
    cout << "Dame la categoria" << endl;
    cin>>q->categoria;
    q->link=p;
    p=q;
        if (i==4) {
          cout <<"Deseas agregar otra caja"<<endl;
          cin>>opc;
          if (opc=='s'||opc=='S') {
            --i;
            }
          }
        }

  q=p;
  imprimelista(q);
  q=p;

  if(q!=NULL) {
    p=q;
    q=q->link;
    delete p;
  }

  return 0;
}


void imprimelista(books *q){
  while (q!=NULL) {

  cout<<"la clave del libro es: "<<q->clave_libro<<endl;
  cout<<"el titulo del libro es: "<<q->titulo<<endl;
  cout<<"el autor del libro es: "<<q->autor<<endl;
  cout<<"la categoria del libro es: "<<q->categoria<<endl;
  q=q->link;
}
}
