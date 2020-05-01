//ejercio apuntadores

#include <iostream>

using namespace std;

int main() {
int x;

  cout<<" ejercicio 1 "<<endl;
  cout<<" ejercicio 2 "<<endl;
  
  cin>>x;
  switch (x) {
    case 1:
    int i,j;
    int *a,*b,*c;
  //ejercicio 1
      a=&i;
      b=&i;
      c=&j;
      *b=4;
      *c=3;
      *a= *c+*b;
      cout<<"la letra i vale "<<i<<endl;
      cout<<"la letra j vale "<<j<<endl;



    break;

    case 2:{
      //ejercicio 2
      double a=100;
      double b=200;
      double *p1;
        p1=&a;
      double *p2;
        p2=&b;
      double **p3;
        p3=&p2;
      a=*p1+ (2 * b);
      *p2= (3 * a)+(3 * **p3);
      *p3=&b;
      p3=&p2;
      **p3=*p2-(*p1 * b);
      cout<<"a vale: "<<a<<endl;
      cout<<"b vale: "<<b<<endl;


    break;

    }
  }
  return 0;
}
