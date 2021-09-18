
//Helen_Acevedo_Tobar_Carnet:0909_21_1802
//Irma_Michel_Tobar_Najarro_Carnet:0909_21_10293
//Miercoles_01_de_Septiembre_2021

//Nombre_de_alumno_y_promedio_de_tres_notas


#include <iostream> // librerias
#include <string>

using namespace std;


int main()

{
	
	string  Nom_alum;
	float Pun_1, Pun_2, Pun_3,suma;   // En float almacenaremos los punteos de las tres notas.
	double Proal;
	
	 
	cout <<" Introduzca su nombre : "<<endl;  // Solicitamos el nombre del alumno
	cin>>Nom_alum;                              // Lee la variable
	
	cout << " \n"<<endl;
	
	cout <<" Ingrese el punteo de la primera nota : "<<endl;  // Ingreso de primera nota
	cin>>Pun_1;
	
	cout<<" \n"<<endl;          // permite hacer un salto 
		
	
	cout <<" Ingrese el punteo de la segunda nota : "<<endl;  // ingreso de segunda nota
	cin>>Pun_2;
	
	cout<<" \n"<<endl;
	
	cout <<" Ingrese el punteo de la tercera nota : "<<endl;  // Ingreso de la tercera nota
	cin>> Pun_3;
	
	suma=Pun_1+Pun_2+Pun_3;  // Suma de las notas para poder sacar el promedio luego
	
	Proal=suma/3;  // Calculo del promedio
	
	cout<<" \n"<<endl;
	
	cout<<"El nombre del estudiante es de: "<<Nom_alum<<endl;  // Muestra el nombre del estudiante
	cout<<"\n"<<endl;
	
	cout<<"Tiene un promedio total de las tres notas de: "<< Proal <<endl;  // Muestra el promedio
	
	
	return 0;
	
	

}