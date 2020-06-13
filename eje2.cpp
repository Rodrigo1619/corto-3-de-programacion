#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
using namespace std; 
void PedirDatos(); //funcion
int main(){
    PedirDatos(); 
	getch(); 
	return 0;  
}
void PedirDatos(){
	int contador=0, numero,n; 
	srand(time(NULL)); 
	numero = 1 + rand()%(100); //generando numero aleatorio
	do{
		cout<<"Digite un numero: "; cin>>n;  //definiendo funcion 
		if(n > numero){
			cout<<"\nDigite un numero menor\n"; 
		}
		else if(n < numero){
			cout<<"\nDigite un numero mayor\n";
		}
	    contador++; 
	}while((n != numero) && (contador < 5)); 
	
	
	
	 if(contador > 4){
		cout<<"\n\t\tLO SENTIMOS SE HA QUEDADO SIN INTENTOS\n";
		cout<<"\n\tNumero de intentos: "<<contador<<endl; 
		cout<<"\tEl numero era: "<<numero<<endl;  
	}
	else{
		cout<<"\n\t FELICITACIONES HA ADIVINADO EL NUMERO, ERES RECIO\n";
		cout<<"\nNumero de intentos: "<<contador<<endl;  
	}
}