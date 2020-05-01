#include <iostream>
  float promedio(float cali[], float n);
  float promedio2(float alumno[],float n);
  int suma(int&a, int&b);
  int resta(int&a, int&b);
  int multiplicacion(int*a,int*b);
  int division(int*a,int*b);
  using namespace std;
  float prome;

int main() {
  int a;

  float calific[7];
  float alumno1[3]={9.7, 8.2, 7.0};
  float alumno2[5]={5.9, 10.0, 8.5, 9.1, 6.2};

    do {
      cout<< "1. ejercicio 1" << endl;
      cout<< "2. ejercicio 2" << endl;
      cout<< "3. ejercicio 3" << endl;
      cout<< "4. salir" << endl ;
      cin>> a;
  switch (a) {
    case 1:
      for (int i = 0; i < 7; i++) {
        cout<<"dame una calificacion" << endl;
        cin >> calific[i];
      }
        prome = promedio(calific, 7);
          cout << "el promedio es :" <<prome<< endl;

    break;

   case 2:

    prome = promedio2(alumno1, 3);
      cout<<"el promedio del primer alumno es :"<<prome<< endl;
    prome=0;

    prome= promedio2(alumno2, 5);
      cout<<"el promedio del segundo alumno es :"<<prome<<endl;

   break;

   case 3:{
    int resultado;
    int b;
    int c,d;
    cout << "suma 1" << endl;
    cout << "resta 2" << endl;
    cout << "multiplicacion 3" << endl;
    cout << "division 4" << endl;
    cin>>b;
    switch (b) {
      case 1:
      cout << "dame dos numeros" << endl;
      cin>>c;
      cin>>d;
      resultado= suma(c,d);
      cout << "el resultado es; " <<resultado<< endl;
      break;
      case 2:
      cout << "dame dos numeros" << endl;
      cin>>c;
      cin>>d;
      resultado= resta(c,d);
      cout << "el resultado es; " <<resultado<< endl;
      break;
      case 3:
      cout << "dame dos numeros" << endl;
      cin>>c;
      cin>>d;
      resultado= multiplicacion(&c,&d);
        cout << "el resultado es; " <<resultado<< endl;
        break;
      case 4:
        cout << "dame dos numeros" << endl;
        cin>>c;
        cin>>d;
        resultado= division(&c,&d);
          cout << "el resultado es; " <<resultado<< endl;
          break;


    }
}
}

} while(a!=4);

  return 0;
}



float promedio(float cali[], float n){

  for (int i = 0; i < n; i++) {
    prome=cali[i]+prome;
  }
  prome=prome/n;

  return (prome);
}

float promedio2(float alumno[],float n){
  for (int i = 0; i < n; i++) {
    prome=alumno[i]+prome;
  }
  prome=prome/n;

  return (prome);
}


int suma(int& a, int& b){
  int suma;
  suma=a+b;
  return (suma);
}
int resta(int& a, int& b){
  int resta;
  return (resta=a-b);
}
int multiplicacion(int *a, int *b){
  int multi;
  multi= (*a) * (*b);
  return(multi);
}

int division(int *a, int *b){
  int divi;
  divi= *a / *b;
  return(divi);

}
