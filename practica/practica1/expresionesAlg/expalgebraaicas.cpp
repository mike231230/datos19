//
// Created by Fernando on 2019-01-18.
//
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a;
    float x,y;
    float resultado;
    float margen;
    float area;
    int anio;
    cout<<"ejercicio 1"<<endl;
    cout<<"ejercicio 2"<<endl;
    cout<<"ejercicio 3"<<endl;
    cout<<"ejercicio 4"<<endl;
    cout<<"ejercicio 5"<<endl;
    cin>>a;
    switch(a){
        case 1:

            cout<< "dame el valor de x"<<endl;
            cin>>x;
            cout<< "dame el valor de y"<<endl;
            cin>>y;
            resultado=x+y;
            resultado=sqrt(resultado);
            cout<<"la raiz cuadrada de la suma de los dos numeros es: "<<resultado<< endl;

        break;

        case 2:
            resultado = 1;
            cout<< "dame el valor de x"<<endl;
            cin>>x;
            cout<< "dame el valor de y"<<endl;
            cin>>y;

            y=y+7;

            while(y!=0){
               resultado = resultado*x;
                y--;
            }

            cout<<"el resultado es: "<<resultado<< endl;
            break;

        case 3:
            cout<< "dame el area "<<endl;
            cin>>area;
            cout<< "Dame el valor de margen"<<endl;
            cin>>margen;

            resultado=area+margen;
            resultado=sqrt(resultado);
            cout<<"el resultado es: "<<resultado<< endl;

            break;
        case 4:
            cout<< "dame el area "<<endl;
            cin>>area;
            cout<< "Dame el valor de margen"<<endl;
            cin>>margen;
            cout<< "Dame el valor de año"<<endl;
            cin>>anio;
            if(anio==0){
              cout<<"el año no puede ser cero"<<endl;
            }
                resultado=area+margen;
                resultado=resultado/anio;
                resultado=sqrt(resultado);
                cout<<"el resultado es: "<<resultado<< endl;

            break;

        case 5:
            cout<< "dame el valor de x"<<endl;
            cin>>x;
            cout<< "dame el valor de y"<<endl;
            cin>>y;

            resultado=x-y;

            if (resultado < 0){
                resultado=resultado*-1;


            }else;
            cout<<"el resultado es: "<<resultado<< endl;

            break;

    }








    return 0;
}
