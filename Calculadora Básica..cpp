

//Helen_Acevedo_Tobar_Carnet:0909_21_1802
//Irma_Michel_Tobar_Najarro_Carnet:0909_21_10293
//Miercoles_01_de_Septiembre_2021

//Calculadora_Básica_Con_4_Funciones_+,-,*,/


#include <iostream>  // Libreria para ejecutar la tarea. XD

 using namespace std;

int main ()


 {
 	
 float Ing1,Ing2 ;   // Ingreso de variables para poder ingresar los valores para las operaciones a operar. ;)
 char  Eop;            // ingresi de variable para texto que servira cuando se utilice switch en la operacion.
 double  responder;    //ingreso de variable con bastantes decimales cumple mejor la funcion que float en cuanto precesicion de decimales.
 
 
 cout<<" Ingrese un primer valor :" <<endl;      // solicitud de ingreso de primer valor de la operación.
 cin>>Ing1;                                 // Lee la  primera variable 
 
 cout << " \n"<<endl;
 
 cout<<" Seleccione el signo de la operacion que desea ejecutar ( +,-,*,/) : "<<endl;   // Solicita ingrese un simbolo para operar con la siguiente solicitud de información.
 cin>> Eop;                                                                       // Lee varible de la informacion que solicito.

 cout <<" \n"<<endl;
 
 
 cout <<" Ingrese un segundo valor para operar el calculo : " <<endl;   // Solicitud de un segundo valor para continuar con la operación
 cin >> Ing2;                                                    // Lee la segunda variable.
   
   
 cout <<" \n"<<endl;
 
                switch  ( Eop){                                      // se utiliza switch para poder ejecutar la seleccion de simbolos a operar.
                               
                               case'+':responder=Ing1+Ing2;
                               break;
                               
                               case '-': responder=Ing1-Ing2;
                               break;
                               
                               case '*': responder=Ing1 * Ing2;
                               break;
                               
                               case '/': responder=Ing1/Ing2;
                               break;
                               
                               default: cout<< " Ingrese un simbolo que sea valido,intente de nuevo";  // si no ingresa un simbolo valida dara este mensaje.
                               
                               exit (1);
                               
 
 }
 
 cout <<" \n"<<endl;
 
 
  cout << " El resultado de la operacion solicitada es de : "  <<responder;  // resultado de la operacion solicitada
  
  
 	
return 0;	
 	
 }