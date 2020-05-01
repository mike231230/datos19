#include <iostream>
#include<math.h>


using namespace std;

double modulo(double &xnum,double &ynum);
int potencia(int*a, int*b);


int main(int argc, char const *argv[]) {
  int opc;
  int numero;
  int poten;
  double num1;
  double num2;
  double resultado;

  cout<<"modulo 1"<<endl<<"potencia 2"<<endl;
  cin>>opc;
switch (opc) {
  case 1:
  cout<<"Dame un valor"<<endl;
  cin >> num1;
  cout<<"Dame un valor"<<endl;
  cin >> num2;
  resultado=modulo(num1,num2);
  cout <<"el modulo es; "<<resultado<<endl;
  break;
  case 2:
  cout<<"Dame un valor"<<endl;
  cin >> numero;
  cout<<"Dame un valor"<<endl;
  cin >> poten;
  resultado=potencia(&numero,&poten);
  cout <<"la potencia es; "<<resultado<<endl;
  break;
}


  return 0;
}


double modulo(double& xnum, double& ynum){
  int x;
  int y;
  x=xnum;
  y=ynum;

  return x % y;




}

int potencia(int *a, int *b){
  int potencia;
    potencia =pow(*a,*b);
    return potencia;




}
