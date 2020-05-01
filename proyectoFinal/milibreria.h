  #include <iostream>
  #include <fstream>
  #include <stdlib.h>

  using namespace std;

  struct cuentas{
    string numeroCuenta;
    int saldo;
  };

  struct cliente{
    string nombre;
    string apellidop;
    string apellidom;
    string numerodecliente;
    int nip;
    cuentas cuenta[3];
    cliente *link;

  };
  struct transaccion{
    string operacion;
    int cantidad;
    transaccion *enlace;

  };
  int cuentaAcuenta(cliente *q,int n);
  int pago_servicio(cliente *q, int n);
  cliente *hacercliente();
  void push(cliente *q);
  int cuentas();
  void menu(int n);
  transaccion *hacer_mov(char description[10], int cantidad);
  void enqueue(transaccion *za);
  transaccion *dequeue();
  void imprimeEdo(transaccion *a, transaccion *b, int n);
  int ingreso(cliente *p, int n);
  int retiro(cliente *q,int n);
  void consulta(cliente *q,int n);
  void login(cliente *q, int aux);

  cliente *p, *q;
   transaccion *nueva, *cfinal, *inicial;

  cliente *hacercliente(){
    cliente *q;
    string datos[7];
    q=new struct cliente;
    if (q==NULL) {
     return NULL;
    }
    ifstream archivo;
    archivo.open("datos.txt",ios::in);
      if (archivo.fail()) {
        cout<<"el archivo no se pudo abrir"<<endl;
        exit(1);
      }
      while(!archivo.eof()) {
        for (int i = 0; i < 7; i++) {
        archivo>>datos[i];
    }
  }
    archivo.close();
      q->nombre=datos[0];
      q->apellidop=datos[1];
      q->apellidom=datos[2];
      q->numerodecliente=datos[3];
      int m=4;
      int j=0;
        while ( j!=3) {
        q->cuenta[j].numeroCuenta=datos[m];
        j++;
        m++;

        }




    cout<<"ingrese su nuevo nip"<<endl;
    cin>>q->nip;

    return q;

  }

    void push(cliente *q){
    if (q==NULL) {
      return;
    }
    q->link=p;
    p=q;
  }

    cliente *pop(){
    cliente *q;
    q=p;
    if (p!=NULL) {
     p=p->link;
     return q;
    }
  }

  int cuentas(){
    int elecuent;

      cout << "1.cuenta1" << endl;
      cout << "2.cuenta2" << endl;
      cout << "3.cuenta3" << endl;
      cout <<"4 salir"<<endl;
          cin>>elecuent;
          elecuent=elecuent-1;
      if (elecuent==3) {

        return 0;
      }

      menu(elecuent);
  }
  void menu(int n){
    int caso;
    do {
    cout << "1. Ingreso" << endl;
    cout << "2. Saldo" << endl;
    cout << "3. Retiro" << endl;
    cout << "4. Pago de servicios" << endl;
    cout << "5. Impresion de edo cuenta" << endl;
    cout << "6. traspaso de cuenta"<<endl;
    cout << "7.Regreso cuenta"<<endl;
    cin>>caso;
      switch (caso) {
        case 1:{
        int monto =  ingreso(q,n);
        enqueue(hacer_mov("Realizo un ingreso", monto));
        break;}
        case 2:{
        consulta(q,n);
        enqueue(hacer_mov("Consulta de saldo", 0));
        break;}
        case 3:{
        int monto = retiro(q,n);
        enqueue(hacer_mov("Retiro la cantidad", monto));
        break;}
        case 4:{
        int monto= pago_servicio(q,n);
              enqueue(hacer_mov("pago de servicio", monto));
        break;}
        case 5:{
        cfinal=nueva;
        q=p;
          imprimeEdo(nueva,cfinal,n);


        break;}
        case 6:{
          int monto =cuentaAcuenta(q,n);
          enqueue(hacer_mov("traspaso a cuenta ",monto));


        break;}
        case 7:
        cuentas();
        break;

      }

    } while(caso!=7);


  }

  transaccion *hacer_mov(char* description, int cantidad){
  transaccion *q;
  q=new struct transaccion;
  if (q==NULL) {
   return NULL;
  }
  q->cantidad = cantidad;
  q->operacion = description;
  return q;
  }
  void enqueue(transaccion *za){
    if (za==NULL) {
      return;
    }
    za->enlace=NULL;
    if (inicial==NULL)
      nueva=za;
    else
    inicial->enlace=za;

    inicial=za;
  }

  transaccion *dequeue(){
    transaccion *q;
    if (nueva==NULL)
      return NULL;

    q=nueva;
    nueva=nueva->enlace;
    q->enlace=NULL;
    if (nueva!=NULL)
      inicial=NULL;
    return q;
  }

    void imprimeEdo(transaccion *a, transaccion *b, int n){

      ofstream archivo;
      if (n==0) {
        archivo.open("edoCuenta1.txt",ios::out);
      }
      if (n==1) {
        archivo.open("edoCuenta2.txt",ios::out);
      }
      if (n==2) {
        archivo.open("edoCuenta3.txt",ios::out);
      }

      if (archivo.fail()) {
        cout<<"No se pudo abrir el archivo"<<endl;
        exit(1);
      }
      archivo<<"\t\t\t Hola este es tu estado de la cuenta "<<q->cuenta[n].numeroCuenta<<endl;

      archivo<<"Cliente "<<q->nombre<<" "<<q->apellidop<<" "<<q->apellidom<<endl;
      archivo<<"Numero de cliente "<<q->numerodecliente<<endl<<endl;
      while (b!=NULL) {

        archivo<<b->operacion<<"\t\t\t\t\t\t\t\t\t\t";
        archivo<<b->cantidad<<endl;
        b=b->enlace;
        }

        archivo<<"saldo final \t\t\t\t\t"<<q->cuenta[n].saldo;
          archivo.close();
          }





  int ingreso(cliente *q, int n){
    int ingres;
    cout<<"Cuanto desea ingresar"<<endl;
    cin>>ingres;
    q->cuenta[n].saldo=q->cuenta[n].saldo+ingres;
    return ingres;
  }

  int retiro(cliente *q,int n){
    int retir;
    cout<<"Cuanto desea retirar"<<endl;
    cin>>retir;
    if (retir>q->cuenta[n].saldo) {
      cout<<"Saldo insuficiente"<<endl;
      return 0;
    }else{
      q->cuenta[n].saldo=q->cuenta[n].saldo-retir;
    return retir;
  }

  }

  void consulta(cliente *q, int n) {
      cout<<"tu saldo es "<<q->cuenta[n].saldo<<endl;
    }

  int cuentaAcuenta(cliente *q,int n){
  int s;
  int trasp;
  cout << "elige la cuenta a la que quieres transferir" << endl;
  cin>>s;
  s=s-1;
  cout<<"Cuanto deseas transferir"<<endl;
  cin>>trasp;
  if (trasp>q->cuenta[n].saldo) {
    cout << "saldo insuficiente" << endl;
  }else{
    q->cuenta[n].saldo=q->cuenta[n].saldo-trasp;
    q->cuenta[s].saldo=q->cuenta[s].saldo+trasp;
  }


  return trasp;

  }


  int pago_servicio(cliente *q, int n){

    int opc;

    char recibo[10];
    int monto;
    cout<<"\t\t Bienvenido al pago de servicios"<<endl;
    cout<<"1. Pago de luz"<<endl;
    cout<<"2. Pago de agua"<<endl;
    cout<<"3. Pago de telefono"<<endl;
    cout<<"4. Pago de predio"<<endl;
    cout<<"5. Pago de tiempo aire"<<endl;
    cout<<"6. Regresar"<<endl;
    cin>>opc;
    switch (opc) {
      case 1:
      cout << "Ingrese el numero del recibo de luz" << endl;
      cin>>recibo;
      cout << "Ingrese el monto a pagar" << endl;
      cin>>monto;
      if (monto>q->cuenta[n].saldo) {
        cout<<"saldo insuficiente"<<endl;
        return monto=0;
      }
      q->cuenta[n].saldo-=monto;
      return monto;
      break;
      case 2:
      cout << "Ingrese el numero del recibo de agua" << endl;
      cin>>recibo;
      cout << "Ingrese el monto a pagar" << endl;
      cin>>monto;
      if (monto>q->cuenta[n].saldo) {
        cout<<"saldo insuficiente"<<endl;
        return monto=0;
      }
      q->cuenta[n].saldo-=monto;
          return monto;
      break;
      case 3:
      cout << "Ingrese el numero del recibo de telefono" << endl;
      cin>>recibo;
      cout << "Ingrese el monto a pagar" << endl;
      cin>>monto;
      if (monto>q->cuenta[n].saldo) {
        cout<<"saldo insuficiente"<<endl;
        return monto=0;
      }
      q->cuenta[n].saldo-=monto;
          return monto;
      break;
      case 4:
      cout << "Ingrese el numero del recibo de predio" << endl;
      cin>>recibo;
      cout << "Ingrese el monto a pagar" << endl;
      cin>>monto;
      if (monto>q->cuenta[n].saldo) {
        cout<<"saldo insuficiente"<<endl;
        return monto=0;
      }
      q->cuenta[n].saldo-=monto;
          return monto;
      break;
      case 5:
      cout << "Ingrese el numero de telefono" << endl;
      cin>>recibo;
      cout << "Ingrese el monto a pagar" << endl;
      cin>>monto;
      if (monto>q->cuenta[n].saldo) {
        cout<<"saldo insuficiente"<<endl;
        return monto=0;
      }
      q->cuenta[n].saldo-=monto;
          return monto;
      break;
      case 6:

      break;
    }
  }
  void login(cliente *q,int aux){
  if (q->nip==aux) {
    cuentas();
    return;
    }else{
      return;
    }
  }
