/*El presidente de un club de futbol requiere calcular el sueldo de sus jugadores
si se tiene como dato la edad y la nacionalidad del jugador.

Ademas se sabe que el sueldo se calculara de la siguiente manera:
Sueldo fijo $2500.00
Si es extranjero recibe un bono de $500.00

Si la edad esta entre 15 y 20, el salario incrementa en $1400.00
Si la edad esta entre 21 y 25, el salario incrementa en $1500.00
Si la edad esta entre 26 y 30, el salario incrementa en $1200.00
Si la edad es mayor a 30, el salario incrementa en $800.00
Determine el sueldo del jugador si se tiene como datos la edad y nacionalidad.

Mostrar un reporte del total a pagar de planilla, así como el total de jugadores por
los rangos de edad. Ademas de indicar que rango de edad es el mas remunerado.
*/
#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
//Functions declaration
void ingreso();

struct jugador{
	char nacionalidad;
	int edad;
	float sueldo;
};

int main(){
	ingreso();
}

void ingreso(){
	int n = 0;
	int i=0;
	int cat1,cat2,cat3,cat4;
	float mayor=0;
	float cs1,cs2,cs3,cs4;
	float base=2500.00,tplanilla=0;
	cout<<"Cuántos jugadores ingresará?: "<<endl;
	cin>>n;
	jugador jugadores[n]; //cadena de ingresos que se deben anexar a esta función
	for(i=0;i<n;i++){
		cout<<"Ingrese 1 si el jugador es nacional, si es extranjero ingrese 2 "<<endl;
		cin>>jugadores[i].nacionalidad;
		cout<<"Ingrese la edad del jugador"<<endl;
		cin>>jugadores[i].edad; 
	}	
	
	for(i=0;i<n;i++){
		if ((jugadores[i].edad>=15) and (jugadores[i].edad<=20)){
			jugadores[i].sueldo = base + 1400;
			if (jugadores[i].nacionalidad = 2){
				jugadores[i].sueldo +=500;
			}
			cat1+=1;
			cs1+=jugadores[i].sueldo;
		}
		else if ((jugadores[i].edad>21) and (jugadores[i].edad<=25)){
			jugadores[i].sueldo = base + 1500;
			cat2+=1;
			cs2+=jugadores[i].sueldo;
		}
		else if ((jugadores[i].edad>26) and (jugadores[i].edad <=30)){
			jugadores[i].sueldo = base + 1200;
			cat3+=1;
			cs3+=jugadores[i].sueldo;
		}
		else if (jugadores[i].edad>30){
			jugadores[i].sueldo = base + 800;
			cat4+=1;
			cs4+=jugadores[i].sueldo;
		}/*
		
		if (jugadores[i].nacionalidad = 2){
			jugadores[i].sueldo +=500;
		}
		else if (jugadores[i].nacionalidad !=2){
			jugadores[i].sueldo +=0;
		}
		tplanilla +=jugadores[i].sueldo;*/
	}
	
	/*for (i=0;i<n;i++){
		if (jugadores[i].nacionalidad == 2){
			jugadores[i].sueldo +=500;
		}
		else if (jugadores[i].nacionalidad !=2){
			jugadores[i].sueldo +=0;
		}
		tplanilla +=jugadores[i].sueldo;
	}	*/
	
	for(i=0;i<n;i++){
		cout<<"Edad del jugador No.: "<<i+1<<" "<<jugadores[i].edad<<endl;
		cout<<"Nacionalidad del jugador No. :"<<i+1<<" Extranjero"<<endl;
		cout<<"Sueldo del jugador No."<<i+1<<" :"<<jugadores[i].sueldo<<endl;
	}
	cout<<"Total planilla: "<<tplanilla<<endl;
	cout<<"Jugadores Categoria 1: "<<cat1<<" Sueldo por categoria: "<<cs1<<endl;
	cout<<"Jugadores Categoria 2: "<<cat2<<" Sueldo por categoria: "<<cs2<<endl;
	cout<<"Jugadores Categoria 3: "<<cat3<<" Sueldo por categoria: "<<cs3<<endl;
	cout<<"Jugadores Categoria 4: "<<cat4<<" Sueldo por categoria: "<<cs4<<endl;

}
