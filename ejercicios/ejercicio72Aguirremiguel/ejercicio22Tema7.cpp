//ejercicio2.2 doblemente ligada

#include <iostream>

void imprimeLista(struct jugador *p);


using namespace std;


  struct jugador{
    char nombre[25];
    int numero;
    int equipo;
    jugador *siguiente;
    jugador *anterior;
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

    crea->siguiente =aux;
    crea->anterior =NULL;

    if (aux!=NULL) {
      aux->anterior=crea;
    }
    aux = crea;


    cout<<"presiona s si quieres una caja mas"<<endl;
    cin>>opc;


  } while(opc=='s'|| opc=='S');

    aux=crea;

  imprimeLista(crea);
  crea=aux;
while (crea!=NULL) {
    crea=aux->siguiente;
    delete aux;
    aux=crea;



return 0;
  }
}

  void imprimeLista(struct jugador *p ){
    while (p!=NULL) {
    cout << p->nombre << endl;
    cout << p->numero << endl;
    cout << p->equipo << endl;
    cout << "el enlace anterior "<<p->anterior<< endl;
    cout << "el enlace siguiente "<<p->siguiente<< endl;
    cout << "la direccion de crea es" << &p<<endl;

    p=p->siguiente;
    }
  }
