#include <iostream>
#include <stdlib.h>
using namespace std;

struct s_jugador{
  int numero;
  float puntaje;
  char nombre[25];
  s_jugador *siguiente;
};

bool otra_caja();
s_jugador *hacer_caja();
void push(s_jugador *q);
s_jugador *pop();
void imprimelista(s_jugador *q);
char* busqueda(int busq1);

s_jugador *p, *q;



int main(int argc, char const *argv[]) {
int valor1;
p=NULL;
q=NULL;

while (otra_caja()) {
  push(hacer_caja());
}
q=p;
imprimelista(q);
cout << "Dame el numero del jugador" << endl;
cin>>valor1;
cout<<busqueda(valor1)<<endl;
while (NULL!=(q=pop())) {
  delete q;
}


  return 0;
}
bool otra_caja(){
  char c;
  cout<<"Otra caja?"<<endl;
  cin>>c;
  return (c=='s'||c=='S');
}
s_jugador *hacer_caja(){
  s_jugador *ap;
  ap=new s_jugador;

  if (ap==NULL) {
    return NULL;
  }
  cout << "Dame el numero del jugador" << endl;
  cin>> ap->numero;
  cout << "Dame el puntaje del jugador" << endl;
  cin>> ap->puntaje;
  cout << "Dame el nombre del jugador" << endl;
  cin>> ap->nombre;
  return ap;
}
void push(s_jugador *q){
  if (q==NULL) {
    return;
  }
  q->siguiente=p;
  p=q;
}
s_jugador *pop(){
  s_jugador *q;
  q=p;
  if (p!=NULL) {
    p=p->siguiente;
    return q;
  }
}
void imprimelista(s_jugador *q) {
  p=q;
  while (q!=NULL) {
    cout<<"el numero del jugador es "<<q->numero<<endl;
    cout<<"el puntaje del jugador es "<<q->puntaje<<endl;
    cout<<"el nombre del jugador es "<<q->nombre<<endl;
    q=q->siguiente;

  }
}
char* busqueda(int busq1){
q=p;
while (q!=NULL) {
  if (q->numero==busq1) {
    return q->nombre;
  }
  q=q->siguiente;

}
return NULL;
}
