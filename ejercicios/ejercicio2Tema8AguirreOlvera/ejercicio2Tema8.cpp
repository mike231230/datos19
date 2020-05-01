#include <iostream>
#include <stdlib.h>
using namespace std;



  struct jugador_e{
    char nombre[25];
    int numero;
    int equipo;
    struct jugador_e *link;
  } ;

  struct jugador_e *p, *q, *r;
  bool otracaja();
  jugador_e *hacer_caja();
  void enqueue(jugador_e *za);
  jugador_e *dequeue();
  void imprimevalores(jugador_e *p,jugador_e *q);
  char* busqueda(int busq1,int busq2);



  int main(int argc, char const *argv[]) {
    int valor1,valor2;
    p=NULL;
    q=NULL;
    r=NULL;
    while (otracaja()) {
      enqueue(hacer_caja());
    }
    q=p;
    imprimevalores(p,q);
    cout << "dame el equipo del jugador" << endl;
    cin >> valor1;
    cout << "dame el numero del jugador" << endl;
    cin>>valor2;
    cout <<busqueda(valor1,valor2) <<endl;
    while(NULL!=(q=dequeue())) {
      delete p;
    }



    return 0;
  }

  bool otracaja(){
    char c;
    cout << "Desea crear otra caja ?" << endl;
    cin>>c;
    return(c=='s'||c=='S');
  }
  jugador_e *hacer_caja(){
    jugador_e *ap;
    ap = new jugador_e;
    if (ap==NULL) {
      return NULL;
    }else{
      cout << "Dame el nombre" << endl;
      cin>>ap->nombre;
      cout << "Dame el numero de jugador" << endl;
      cin>> ap->numero;
      cout << "dame el numero del equipo" << endl;
      cin >> ap->equipo;
      return ap;
    }
  }

  void enqueue(jugador_e *za){
    if(za ==NULL)
      return;
      za->link=NULL;
      if(r==NULL)
        p=za;
      else
        r->link=za;
        r=za;
  }

  jugador_e *dequeue(){
    jugador_e *ot;
    if(p==NULL)
      return NULL;

    ot=p;
    p=p->link;
    ot->link=NULL;
    if (p!=NULL)
      r=NULL;
      return ot;
  }

  void imprimevalores(jugador_e *p,jugador_e *q) {
    int j=1;
    q=p;
    while(q!=NULL) {
      cout << "el nombre " <<j<<" es: "<<q->nombre<<endl;
      cout<< "el numero del jugador es "<<q->numero<<endl;
      cout<< "el equipo es "<<q->equipo<<endl;
      q=q->link;
      j++;
    }
  }

  char* busqueda(int busq1,int busq2){
    q=p;
    while (q!=NULL) {
      if (q->equipo==busq1) {
        if (q->numero ==busq2) {
        return q->nombre;
        }

      }
      q=q->link;

    }
    return NULL;
  }
