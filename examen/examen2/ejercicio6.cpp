#include <iostream>
#include <stdlib.h>

using namespace std;

struct tree{
  int elemento;
  tree *lado_izq;
  tree *lado_der;
};

bool hayhijo(int n);
tree *construye_arbol();
void imprimearbol(tree *p);
void imprimearbol2(tree *p);
void imprimearbol3(tree *p);



int main(int argc, char const *argv[]) {

  int opc;

  cout << "como quieres recorrer el arbol?" << endl;
  cout<<"1. pre orden"<<endl;
  cout<<"2. post orden"<<endl;
  cout<<"3. entre orden"<<endl;
  cin>>opc;

  switch (opc) {
    case 1:
      imprimearbol(construye_arbol());
    break;
    case 2:
      imprimearbol2(construye_arbol());
    break;
    case 3:
      imprimearbol3(construye_arbol());
    break;

  }
  return 0;
}
bool hayhijo(int n){
  char *lado[2]={"izq","der"};
  char c;
  cout << "hay hijo " <<lado[n]<<"?"<<endl;
  cin >>c;

  return c=='s' || c=='S';

}
tree *construye_arbol(){
  tree *raiz;
  raiz= new tree;
  cout<<"dato?"<<endl;
  cin>>raiz->elemento;
  raiz->lado_izq =NULL;
  raiz->lado_der=NULL;

  if (hayhijo(0)) {
    raiz->lado_izq=construye_arbol();
  }
  if (hayhijo(1)) {
    raiz->lado_der=construye_arbol();
  }
  return raiz;
}

void imprimearbol(tree *p){
  if (p==NULL) {
    return;
  }
  cout << p->elemento << endl;
  imprimearbol(p->lado_izq);
  imprimearbol(p->lado_der);

}
void imprimearbol2(tree *p){
  if (p==NULL)
    return;
  imprimearbol2(p->lado_izq);
  imprimearbol2(p->lado_der);
  cout << p->elemento << endl;

}
void imprimearbol3(tree *p){
  if (p==NULL)
    return;
  imprimearbol3(p->lado_izq);
  cout << p->elemento << endl;
  imprimearbol3(p->lado_der);
}
void destruyearbol(tree *p){
  if (p!=NULL) {
    destruyearbol(p->lado_izq);
    destruyearbol(p->lado_der);
    delete p;
  }
}
