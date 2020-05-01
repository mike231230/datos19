#include <iostream>

using namespace std;

void leermatriz(int**, int&, int&);
void imprimirmatriz(int**, int&, int&);
void traspuesta(int**, int&, int&);


int main() {
  int **array;
  int a=7;
  int b=2;
  array=new int *[a];
  for (int i = 0; i < a; i++) {
    array[i]=new int [b];
  }
    leermatriz(array,a,b);

    imprimirmatriz(array,a,b);

    traspuesta(array,a,b);
    if (array!=NULL) {
      for (int i = 0; i < a; i++) {
        if (array[i]!=NULL) {

     }
     delete [] array[i];

   }
 }
 delete [] array;


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
cout<<"la matriz es; "<<endl;
for (int i = 0; i < b; i++) {
  for (int j = 0; j < c; j++) {

    cout << "|"<<A[i][j]<<"|";

  }
  cout<< endl;
  }

}
void traspuesta(int** A, int& b, int& c){
cout<<"la traspuesta es; "<<endl;
for (int i = 0; i < c; i++) {
  for (int j = 0; j < b; j++) {

    cout << "|"<<A[j][i]<<"|";

  }
  cout<< endl;
  }

}
