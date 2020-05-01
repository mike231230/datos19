//cola algoritmo 
#include <iostream>
#include <stdlib.h>
using namespace std;

struct alumno{
    char nombre[25];
    char matricula[10];
    float calificacion_final;
  alumno *siguiente;
};
alumno *p, *q, *r;
bool otra_caja();
alumno *hacer_caja();
void enqueue(alumno *za);
alumno *dequeue();
void imprimelista(alumno *aux, alumno *aux2);
float promedio(alumno *cal);

int main(int argc, char const *argv[]) {
float cal;
p=NULL;
q=NULL;
r=NULL;

while (otra_caja()) {
  enqueue(hacer_caja());
}
q=p;
imprimelista(p,q);
p=q;
cal=promedio(q);
cout<<"el promedio de todos es: "<<cal<<endl;
while (NULL!=(q=dequeue())) {
  delete p;
}

  return 0;
}
bool otra_caja() {
  char c;
  cout<< "Otra caja? "<<endl;
  cin>>c;
return(c == 's' || c == 'S');
}
alumno *hacer_caja(){
  alumno *ap;
 ap=new alumno;
 if (ap==NULL) {
   return NULL;
 }
 cout<<"dame el nombre del alumno"<<endl;
 cin>>ap->nombre;
 cout<<"dame la matricula "<<endl;
 cin>>ap->matricula;
 cout<<"dame el promedio"<<endl;
 cin>>ap->calificacion_final;

 return ap;
}
void enqueue(alumno *za){
  if (za==NULL) {
    return;
  }
  za->siguiente=NULL;
  if (r==NULL)
    p=za;
  else
  r->siguiente=za;

  r=za;
}
alumno *dequeue(){
  alumno *ot;
  if (p==NULL)
    return NULL;

  ot=p;
  p=p->siguiente;
  ot->siguiente=NULL;
  if (p!=NULL)
    r=NULL;
  return ot;
}
void imprimelista(alumno *aux, alumno *aux2){
  aux2=aux;
  while (aux2!=NULL) {
    cout<<"el nombre del alumno es "<<aux2->nombre<<endl;
    cout<<"la matricula es "<<aux2->matricula<<endl;
    cout<<"el promedio es "<<aux2->calificacion_final<<endl;
    aux2=aux2->siguiente;
  }
}
float promedio(alumno *cal){
  int cont=0;
  float calificacionP=0;
while (cal!=NULL) {
calificacionP = calificacionP+cal->calificacion_final;
cont++;
cal=cal->siguiente;
}
return calificacionP/cont;


}
