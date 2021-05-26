#include <iostream>
using namespace std;
int main(){
	int edad[5];
	string nombre[5];
	string apellido[5];
	int horallegada[5];
	float minutosllegada[5];
	for(int i=0;i<5;i++){
		cout<<"Ingrese el nombre del estudiante a ingresar "<<endl;
		cin>>nombre[i];
		cout<<"Ingrese el apellido del estudiante a ingresar "<<endl;
		cin>>apellido[i];
		cout<<"Ingrese la edad del estudiante "<<endl;
		cin>>edad[i];
		cout<<"Ingrese el numero de la hora de llegada en formato 24 horas"<<endl;
		cin>>horallegada[i];
		cout<<"Ingrese los minutos respectivos a la hora de llegada "<<endl;
		cin>>minutosllegada[i];
	}
	float promedio=0;
	int acumulador=0;
	for(int i=0;i<5;i++){
		acumulador=acumulador+edad[i];
	}
	promedio=acumulador/5;
	int superior=0;
	cout<<"Los estudiantes con edad superior al promedio son"<<endl;
	for(int i=0;i<5;i++){
		if(edad[i]>promedio){
			cout<<nombre[i]<<" "<<apellido[i]<<endl;
		}
	}
	int horasalida[5];
	float minutossalida[5];
	for(int i=0;i<5;i++){
		cout<<"Ingrese la hora de salida en formato 24 horas"<<endl;
		cin>>horasalida[i];
		cout<<"Ingrese los minutos correspondientes a la hora de salida "<<endl;
		cin>>minutossalida[i];
	}
	for(int i=0;i<5;i++){
		minutosllegada[i]=minutosllegada[i]/60;
		minutossalida[i]=minutossalida[i]/60;
	}
	float hora[5];
	int minutos[5];
	for(int i=0;i<5;i++){
		hora[i]=(horasalida[i]+minutossalida[i])-(horallegada[i]+minutosllegada[i]);	
	}
	for(int i=0;i<5;i++){
		cout<<"El estudiante "<<nombre[i]<<" "<<apellido[i]<<" duró "<<hora[i]<<" en la biblioteca "<<endl;
	}
	return 0;
}
