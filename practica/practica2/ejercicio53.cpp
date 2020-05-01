#include <iostream>
#include <stdlib.h>

using namespace std;
struct caja{
  int  elemento;
  caja *link;
};

caja *p, *q;

int main(int argc, char const *argv[]) {
  p=NULL;
  q=NULL;
  for (int i = 0; i < 4; i++) {
    q=new caja;
    q->elemento=i;
    q->link=p;
    p=q;

  }
q=p;
while(q!=NULL){
  cout<<q->elemento<<endl;
  p=q;
  q=q->link;
  delete p;

}


  return 0;
}
