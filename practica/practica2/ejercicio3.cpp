#include <iostream>
#include <stdlib.h>

using namespace std;

struct movieData{
  char movieTitle[70];
  char movieDirector[70];
  int yearReleased;
  int runningTime;
  movieData *link;

};
void imprimelista(movieData *q);



int main(int argc, char const *argv[]) {
  movieData *p,*q;
  char opc;
  p=NULL;
  q=NULL;


    for (int i = 0; i < 5; i++) {

    q=new struct movieData;

    cout<<"dame el nombre de la pelicula"<<endl;
    cin>>q->movieTitle;
    cout<<"dame el nombre del director"<<endl;
    cin>>q->movieDirector;
    cout<<"año de lanzamiento"<<endl;
    cin>>q->yearReleased;
    cout<<"duracion"<<endl;
    cin>>q->runningTime;
      q->link=p;
      p=q;
      if (p==NULL) {
        p=q;
      }
      q->link=p->link;
      p->link=q;

      if (i=4) {
      cout << "presiona s si quieres otra caja" << endl;
      cin>>opc;
    } if (opc=='s'||opc=='S') {
      --i;
    }
}

  p=q;

  imprimelista(q);

q=p;
 if (q!=NULL) {
   p=q;
   q=q->link;
   delete p;
 }


  return 0;
}

void imprimelista(movieData *q){
  while (q!=NULL) {
    cout << "el nombre de la pelicula es " <<q->movieTitle<<endl;
    cout << "el nombre del director es: " << q->movieDirector<<endl;
    cout << "el año de lanzamiento es " << q->yearReleased <<endl;
    cout << "la duracion es de  " <<q->runningTime <<" min " <<endl;
    q=q->link;

  }
}
