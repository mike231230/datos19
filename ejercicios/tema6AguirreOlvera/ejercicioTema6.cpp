#include <iostream>

using namespace std;
void imprimirmatriz(int**, int&, int&);
void leermatriz (int**, int&, int&);

int y;

int main() {
  int **A;
  int n,m;
  int op;
  cout << "renglones:" << endl;
  cin>>n;
  cout<< "columnas:"<< endl;
  cin>>m;
  cout<<"ejercicios"<< endl;
  cout << "ejercicio 1" << endl;
  cout << "ejercicio 2" << endl;
  cin>>op;

  A= new int *[n];
  for (int i = 0; i < n; i++) {
    A[i]=new int [m];
  }

switch (op) {
  case 1:

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << "matriz[" <<i<<"]"<<"["<<j<<"]:"<<endl;
      cin>>A[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << "|"<<A[i][j]<<"|";

    }
    cout<< endl;
  }


  break;

  case 2:
    leermatriz(A,n,m);
    imprimirmatriz(A,n,m);



    break;


  }
  if (A!=NULL) {
   for (int i = 0; i < n; i++) {
     if (A[i]!=NULL) {

       }
       delete [] A[i];

     }
   }
   delete [] A;



    return 0;
}



void leermatriz (int** A, int& b, int& c){
  for (int i = 0; i < b; i++) {
    for (int j = 0; j < c; j++) {
      cout << "matriz[" <<i<<"]"<<"["<<j<<"]:"<<endl;
      cin>>A[i][j];
    }
  }
}
void imprimirmatriz(int** A, int& b, int& c){
for (int i = 0; i < b; i++) {
  for (int j = 0; j < c; j++) {
    cout << "|"<<A[i][j]<<"|";

  }
  cout<< endl;
  }

}
