/*
En la pizzeria el gran sabor se tienen las siguientes ofertas:
Por la compra de una pizza grande (Q 80.00) recibe un descuento del 10%
Por la compra de una pizza familiar (Q 115.00) recibe un descuento del 15%
Por la compra de una pizza fiesta ( Q 100.00) recibe un descuento de 20%
1. Solicitar el tipo de pizza, el precio unitario y hallar el precio a pagar
2. Grabar los datos a un archivo y mostrar el total global de la venta de un día y determinar el total de 
lo vendido por producto, mostrando tambien el porcentaje con relación al total
*/

#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
struct pizza{
	int tipo;
	float precio;
}; 
void menu();
void ingresardatos();
void leer_archivo();
int main(){
	menu();
}
void menu(){
	int resp;
	string nombrearchivo;
	cout<<"Indique nombre de archivo: ";
	getline(cin,nombrearchivo);
	
	do {
		system("CLS");
		cout<<"--------------------------"<<"\n";
		cout<<" Menu Principal"<<"\n";
		cout<<"-------------------"<<"\n";
		cout<<" 1 - Ingresar venta "<<"\n";
		cout<<" 2 - Reporte de ventas del día "<<"\n";		
		cout<<" 3 - Salir"<<"\n";
		cout<<"--------------------------"<<"\n";
		cout<<" Seleccione su opcion: ";
		cin>>resp;
		if (resp==1){		
			system("CLS");
			ingresardatos();			
		}
		else if (resp==2){		
			system("CLS");
			leer_archivo();
		}					
		else if (resp==4)
			break;
		else 
			break;
		
	} while(resp!=4);	
}

void ingresardatos(string na){
	int tipo,n=1;
	//string nombre_est; //nombre_est;
	float precio_pizza;//Nota_est
	pizza pizzas[n];
	cout<<"Ingrese tipo de pizza a vender: "<<endl;
	cin>>tipo;
	if (tipo = 1){
		pizzas.precio = (80)*0.90;
	}
	else if (tipo = 2){
		pizzas.precio = (115)*0.85;
	}
	else if (tipo = 2){
		pizzas.precio = (100)*0.80
	}
	fflush(stdin);//codigo de estudiante que tiene que 
	/*cout<<"Ingrese cantidad de pizzas a vender "<<endl;
	cin>>n;// getline(cin,nombre_est);asigna datos a la variable local
	cout<<"Ingrese Nota de estudiante: "<<endl;
	cin>>nota_est;
	*/
	ofstream archivo; //grabar en archivo;
	fflush(stdin); //borrar el buffer existente
	archivo.open(na.c_str(),ios::app); //append
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	archivo<<tipo<<"\t"<<pizza.precio; //<<"\t"<<nota_est<<endl;
	archivo.close();
}

void leer_archivo(){
	ifstream archivo; //leer archivo 
	archivo.open(na.c_str(),ios::in);
	int lineas,i=0;
	string s,linea;
	//float sumatoriasalarial=0.00;	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo!!!";
		exit(1); //break;
	}
	while (getline(archivo, s))
        lineas++;
	archivo.close();
	
	pizza recordset[lineas];
	
	archivo.open(na.c_str(),ios::in);
		if(archivo.fail()){
		cout<<"No se pudo abrir el archivo!!!";
		exit(1);
	}	
	/*Leer datos del archivo*/
	for (int i = 0; i < lineas; i++)
    {
        if (!archivo)
        {                                               
            cerr << "No se puede abrir el archivo " << endl;
            system("PAUSE");
        }
        //cout<<"i: "<<i;
        archivo>>recordset[i].tipo>>recordset[i].precio; //>>recordset[i].codemp>>recordset[i].salario;
    }
    archivo.close(); 
    for(int i = 0; i < lineas; i++){
    	cout<<recordset[i].tipo<<" "<<recordset[i].precio; //<<" "<<recordset[i].apellido<<" "<<recordset[i].salario<<endl;
    	//sumatoriasalarial+=recordset[i].salario;//Esta función suma valores asignados a la variable 
	}
//	cout<<"Sumatorial total: "<<sumatoriasalarial;
	system("PAUSE");
}
