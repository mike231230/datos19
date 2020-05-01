#include <iostream>

using namespace std;

struct address{
  char name[50];
  char street[50];
  char city[50];
  char state[50];
  int pin;
  address *siguiente;
  address *anterior;

};
void imprimeLista(address *q);

int main(int argc, char const *argv[]) {
  address *p,*q;
  p=NULL;
  q=NULL;
char opc;
 for (int i = 0; i < 5; i++) {
   q=new address;

   cout<<"dame el nombre"<<endl;
   cin>>q->name;
   cout<< "Dame la calle"<<endl;
   cin>>q->street;
   cout<< "Dame la ciudad"<<endl;
   cin>>q->city;
   cout<< "Dame el estado"<<endl;
   cin>>q->state;
   cout<< "Dame el codigo"<<endl;
   cin>>q->pin;

   q->siguiente=p;
   q->anterior=NULL;
   if (p!=NULL) {
     p->anterior=q;
   }
   p=q;
   if (i==4) {
     cout<<"quieres otra caja oprime s"<< endl;
     cin>>opc;
     if (opc=='s'||opc=='s') {
       --i;
     }
   }
 }
 p=q;
imprimeLista(q);
q=p;
while (q!=NULL) {
    q=p->siguiente;
    delete p;
    p=q;

}



  return 0;
}


void imprimeLista(address *q){
  while (q!=NULL) {

  cout<<"el nombre es: "<<q->name<<endl;
  cout<<"la calle es: "<<q->street<<endl;
  cout<<"ciudad: "<<q->city<<endl;
  cout<<"estado : "<<q->state<<endl;
  cout<<"codigo : "<<q->pin<<endl;
  cout << "el enlace anterior "<<q->anterior<< endl;
  cout << "el enlace siguiente "<<q->siguiente<< endl;

  q=q->siguiente;
  }
}
