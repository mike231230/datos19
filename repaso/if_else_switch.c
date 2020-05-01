#include <stdio.h>


 int main() {
  int a;
  int saldo=0;
  int retiro=0;
  printf("bienvenido a banco xd\n");
do {
  printf("opcion 1 ingrsar efectivo\n");
  printf("opcion 2 consultar saldo \n" );
  printf("opcion 3 retirar efectivo \n" );
  printf("opcion 4 salir\n" );
  scanf("%d",&a );

  switch (a) {
    case 1:
    printf("dame la cantidad deseada\n" );
    scanf("%d",&saldo);

    break;


    case 2:
      printf("tu saldo es %d\n",saldo );

    break;
    case 3:
      printf("cuanto desea retirar \n" );
      scanf("%d",&retiro);

      if (retiro > saldo) {
        printf("el saldo es insuficiente\n" );
      }
      else{
        saldo=saldo-retiro;
        printf("saldo actual %d\n",saldo );
      }

    break;

default: ;

}
} while(a!=4);
  printf("gracias por su visita \n" );

  return 0;
}
