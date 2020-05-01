//ejercicio2 tema 7 listas ligadas
#include <iostream>

void imprimeLista(struct jugador *p);


using namespace std;


  struct jugador{
    char nombre[25];
    int numero;
    int equipo;
    jugador *link;
  };

int main() {
  struct jugador *crea,*aux;
  crea=NULL, aux=NULL;
  char opc='n';
do {
    crea=new struct jugador;

    cout<< "dame el nombre del jugador"<< endl;
    cin>>crea->nombre;
    cout<< "dame el numero del jugador"<< endl;
    cin>>crea->numero;
    cout<< "dame el equipo del jugador"<< endl;
    cin>>crea->equipo;
    crea->link=aux;
    aux=crea;

    if (aux==NULL) {
      aux=crea;
    }
    crea->link = aux->link;
    aux->link =crea;

    cout<<"presiona s si quieres una caja mas"<<endl;
    cin>>opc;


  } while(opc=='s'|| opc=='S');

    aux=crea;

  imprimeLista(crea);


return 0;
  }


  void imprimeLista(struct jugador *p ){
    while (p!=NULL) {
    cout << p->nombre << endl;
    cout << p->numero << endl;
    cout << p->equipo << endl;
    p=p->link;
    }
  }
