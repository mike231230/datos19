//arreglos dinamicos
#include <iostream>

using namespace std;

int main() {
int x;
int y;
  cout<<" ejercicio 1 "<<endl;
  cout<<" ejercicio 2 "<<endl;

  cin>>x;

  switch (x) {
    case 1:
    cout<<"memoria estatica 1"<<endl;
    cout<<"memoria dinamica 2"<<endl;
    cin>>y;
      switch (y) {
        case 1:
        int c[2][5][3];
          for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 5; j++) {
              for (int k = 0; k < 3; k++) {
                cout<<"dame el valor de c ["<<i<<"]["<<j<<"]["<<k<<"]:";
                cin>>c[i][j][k];
              }
            }
          }
          for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 5; j++) {
              for (int k = 0; k < 3; k++) {
                cout<<"|"<<c[i][j][k]<<"|";
              }
              cout<< endl;
            }
          }

          case 2:{
            int ***c;
            int n=2,m=5,l=3;
            c=new int **[n];
            for (int i = 0; i < n; i++) {
              c[n]=new int *[m];
              for (int j = 0; j < m; j++) {
                c[n][m]=new int [l];
              }
            }
            for (int i = 0; i < n; i++) {
              for (int j = 0; j < m; j++) {
                for (int k = 0; k < l; k++) {
                  cout<<"dame el valor de c ["<<i<<"]["<<j<<"]["<<k<<"]:";
                  cin>>c[i][j][k];
                }
              }
            }
          /*  for (int i = 0; i < 2; i++) {
              for (int j = 0; j < 5; j++) {
                for (int k = 0; k < 3; k++) {
                  cout<<"|"<<c[i][j][k]<<"|";
                }
                cout<< endl;
              }
            }
            if (c!=NULL) {
              for (int i = 0; i < n; i++) {
                if (c[i]!=NULL) {
                  for (int j = 0; j < m; j++) {
                    if (c[i][j]!=NULL) {

                    }
                    delete [] c[i][j];
                  }
                }
                  delete [] c[i];
              }
              delete[] c;
            }



          }




*/
    break;
}
}
    case 2:{










    break;
    }
  }
  return 0;
}
