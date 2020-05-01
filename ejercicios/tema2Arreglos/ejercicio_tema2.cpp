  #include <iostream>

  using namespace std;

  int main(){


    int l;


    cout<<"ejercio 1"<<endl;
    cout<<"ejercio 2"<<endl;
    cout<<"ejercio 3"<<endl;
    cout<<"ejercio 4"<<endl;

    cin>>l;


    switch (l) {
      case 1:{
        double r=3;
        double s=2;
        double *p;
        double *q;
        double z;
          p= &r;
          q= &s;
          z=*p+*q;

          cout<< "el resultado es: "<< z <<endl;


      break;
    }

      case 2: {
        int a;
        int *ptr;
        ptr=&a;
        *ptr=24;
        cout<< "el valor de a es: " << a << endl;
        cout<< "el valor de lo que apunta ptr es: " << *ptr << endl;
        cout<< "el valor de ptr es: " << ptr << endl;

      break;
    }
     case 3:{
       float *x;
       float *y;
       float *z;
       float m,n;
       x=&m;
       y=&m;
       z=&n;
       *y=45;
       *z=10;
       *x= 3 * *y + 2 * *z;
       cout<<"el valor de m es: "<<m<<endl;
       cout<<"el valor de n es: "<<n<<endl;





       break ;
     }
     case 4:{
        double x = 30;
        double y=50;
        double *ptr1;
          ptr1=&x;
        double *ptr2;
          ptr2=&y;
        double **ptr3;
          ptr3=&ptr2;
          x=*ptr1+x;
          *ptr3=&y;
          ptr3=&ptr2;
          *ptr3=&x;
          **ptr3= *ptr2 - *ptr1 * x;
            cout<< "el valor de x es igual a "<< x << endl;
            cout<< "el valor de y es igual a "<< y << endl;
  }
    }



    return 0;
  }
