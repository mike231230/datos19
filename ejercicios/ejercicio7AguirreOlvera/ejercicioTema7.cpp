#include <iostream>
  using namespace std;

  void imprimeLista(struct jugador *p);

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

    cout<<"presiona s si quieres una caja mas"<<endl;
    cin>>opc;

  } while(opc=='s'|| opc=='S');

  aux=crea;

  imprimeLista(crea);

  crea=aux;
    while (crea!=NULL) {
      crea=aux->link;
      delete aux;
      aux=crea;

    }




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
