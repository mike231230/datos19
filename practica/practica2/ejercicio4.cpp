#include <iostream>
#include <stdlib.h>

using namespace std;

struct times{
  int seconds;
  int minutes;
  int hours;
  times *link;
};

 times *p, *q;

bool otra_caja();
times *hacer_caja();
void push(times *q);
times *pop();
void imprimeLista(times *q);

int main(int argc, char const *argv[]) {
p=NULL;
q=NULL;


while (otra_caja()) {
  push(hacer_caja());

}
q=p;
imprimeLista(q);
while (NULL != (q=pop())) {
  delete q;
}




  return 0;
}
bool otra_caja() {
  char c;
  cout<< "Otra caja? "<<endl;
  cin>>c;
return(c == 's' || c == 'S');
}
times *hacer_caja(){
  times *q;
 q=new struct times;
 if (q==NULL) {
   return NULL;
 }
 cout<<"dame los minutos"<<endl;
 cin>>q->minutes;
 cout<<"dame los segundos"<<endl;
 cin>>q->seconds;
 cout<<"dame las horas "<<endl;
 cin>>q->hours;

 return q;
}
void push(times *q){
  if (q==NULL) {
    return;
  }
  q->link=p;
  p=q;
}
times *pop(){
times *q;
 q=p;
 if (p!=NULL) {
   p=p->link;
   return q;
 }
}
void imprimeLista(times *q){
  p=q;
  while (q!=NULL) {
    cout<<"la hora es "<<q->hours<<" horas "<<q->minutes<<" minutos "
    <<q->seconds<<" segundos "<<endl;
    q=q->link;
  }
}
