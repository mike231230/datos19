#include <iostream>
#include <stdlib.h>

using namespace std;

struct pilaA{
  int contador;
  pilaA *link;

};

struct pilaB{
  int cont;
  pilaB *link;

};
pilaA *p1,*q1;
pilaB *p2,*q2;

int main(int argc, char const *argv[]) {
p1=NULL;  q1=NULL;
p2=NULL;  q2=NULL;

for (int i = 0; i <4; i++) {
  q1=new pilaA;
  q1->contador=i+1;
  q1->link=p1;
  p1=q1;

}

p1=q1;
cout << "la pila A es:" << endl;
for (int i = 0; i < 4; i++) {
  cout<< "cell "<<q1->contador<<endl;
  q1=q1->link;
}

q1=p1;
for (int i = 0; i < 4; i++) {
  q2=new pilaB;
  q2->cont=q1->contador;
  q2->link=p2;
  p2=q2;
  q1=q1->link;

}
q2=p2;
cout << "la pila B es:" << endl;
for (int i = 0; i < 4; i++) {
  cout<< "cell "<<q2->cont<<endl;
  q2=q2->link;
}
p2=q2;
p1=q1;
while (q1!=NULL) {
  p1=q1;
  q1=q1->link;
  delete p1;
}

while (q2!=NULL) {
  p2=q2;
  q2=q2->link;
  delete p2;
}


  return 0;
}
