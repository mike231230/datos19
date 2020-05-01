
#include <iostream>

double far_to_cent(double farenheit);
float mayor(float *x, int tamanio);

using namespace std;

int main(){
    double farhenheit;
    double centigrad;
    int a;
    float *x;
    int n;
    float may;

    cout<<"ejercicio 1"<<endl;
    cout<<"ejercicio 2"<<endl;
    cin>>a;




    switch (a){
        case 1:
            cout<<"cuantos grados farenheit"<<endl;
            cin>>farhenheit;

            far_to_cent(farhenheit);

            centigrad=far_to_cent(farhenheit);

            cout<<"los grados farhenheit son "<<farhenheit<<" en centigrados son: "<<centigrad<<endl;

            break;

        case 2:

            cout<<"¿De que tamaño es tu vector?"<<endl;
            cin>>n;

            x=new float [n];
            for (int i; i<n;i++){
                cout<<"dame un valor"<<endl;
                cin>>x[i];


            }

            may=mayor( x, n);

            cout<<"el numero mayor es "<<may<<endl;

            break;
    }







    return 0;
}


double far_to_cent(double farhenheit){
    double conversion;

    conversion=(farhenheit-32)* 5/9;

    return (conversion);



}
float mayor(float *x, int tamanio){
    float may;
    float aux;
    may=0;

    for (int i = 0; i < tamanio; i++) {
      for(int j = 0; j < tamanio; j++) {
        if(x[j] > x[j+1]) {
          aux=x[j];
          x[j] = x[j+1];
          x[j+1] = aux;
        }
      }
    }
    may=x[tamanio];

    return (may);

}
