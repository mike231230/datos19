#include <iostream>
#include <stdlib.h>

using namespace std;

struct student{
  char name[50];
  int enrollment;
  float average;
  student *enlace;
  };

student *nueva, *cfinal, *inicial;
// p q r
bool otra_caja();
student *hacer_caja();
void enqueue(student *q);
student *dequeue();
void imprimelista(student *p, student *q);


int main(int argc, char const *argv[]) {
nueva=NULL;
cfinal=NULL;
inicial=NULL;

while(otra_caja()) {
  enqueue(hacer_caja());
}
cfinal=nueva;

imprimelista(nueva,cfinal);

while (NULL!=(cfinal=dequeue())) {
  delete nueva;
}

  return 0;
}
bool otra_caja() {
  char c;
  cout<< "Otra caja? "<<endl;
  cin>>c;
return(c == 's' || c == 'S');
}

student *hacer_caja(){
  student *ap;
 ap=new student;
 if (ap==NULL) {
   return NULL;
 }
 cout<<"dame el nombre del alumno"<<endl;
 cin>>ap->name;
 cout<<"dame el semestre "<<endl;
 cin>>ap->enrollment;
 cout<<"dame el promedio"<<endl;
 cin>>ap->average;

 return ap;
}
void enqueue(student *za){
  if (za==NULL) {
    return;
  }
  za->enlace=NULL;
  if (inicial==NULL)
    nueva=za;
  else
  inicial->enlace=za;

  inicial=za;
}
student *dequeue(){
  student *q;
  if (nueva==NULL)
    return NULL;

  q=nueva;
  nueva=nueva->enlace;
  q->enlace=NULL;
  if (nueva!=NULL)
    inicial=NULL;
  return q;
}
void imprimelista(student *p, student *q){
  q=p;
  while (q!=NULL) {
    cout<<"el nombre del alumno es "<<q->name<<endl;
    cout<<"el semestre es "<<q->enrollment<<endl;
    cout<<"el promedio es "<<q->average<<endl;
    q=q->enlace;
  }
}
