#include<iostream> //Biblioteca estandar que permite entrada/salida
#include<cmath>  /*Biblioteca estandar que almacena funciones matematicas
que son aplicadas en los programas*/
 
/*Se utliza para limpiar pantalla en cualquier sistema operativo*/
 
#ifdef WIN32
#define clear() system("cls");
#else
#define clear() system("clear");
#endif
 
#ifdef WIN32
#define PAUSE() system("PAUSE");
#else
#define PAUSE() system("PAUSE");
#endif
 
using namespace std; /*Especifica que los miembros de un namespace se utilizaran
frecuentemente*/
 
int main() { /*Cuerpo del programa*/
  
  /*Se declaran las variables*/
  
  int opcion;
  float cat1,cat2,hip; /*Se utiliza para almacenar valores numericos con decimales*/
  
  /*Menu con opciones a escoger*/
  
  do {
    clear();
    cout<<"1.Calcular Hipotenusa De Triangulo"<<endl<<"2.Salir"<<endl; /*Escoger opcion*/
    cin>>opcion;
    
    /*Acciones a ejecutar dependiendo de la opcion seleccionada*/
    
    switch(opcion) {
      case 1:  
        do {
          /*Pide al usuario medida de los catetos*/
          
          cout<<"Escribe la medida de los catetos"<<endl;
          cout<<"Cateto 1: "<<endl;
          cin>>cat1;
          cout<<"Cateto 2: "<<endl;
          cin>>cat2;
          
          /*Accion a ejecutar solo si ambos catetos son positivos*/
          
          if (cat1 > 0 && cat2 > 0) {
            /*Formula para calcular la hipotenusa*/
            hip = sqrt(pow(cat1,2.0)+ pow(cat2,2.0));
            cout<<"La hipotenusa es: "<<sqrt(pow(cat1,2.0)+ pow(cat2,2.0))<<endl;
            system("PAUSE");
            clear();
          }
          
          /*Accion a ejecutar si al menos uno de los catetos es negativo,
          limpia pantalla y vuelve a pedir al usuario introducirlos nuevamente*/
          
          else{
            cout<<"Error,los catetos deben ser positivos"<<endl;
            system("PAUSE");
            clear();
          }
        
        } while(cat1 <=0 || cat2 <= 0);
        break;
        
      /*Si la opcion fue dos se sale del programa*/
      case 2:
        break;
 
      default: 
        cout<<"Opcion incorrecta"<<endl;
        system("PAUSE");                  
    }
  } while(opcion != 2);
}