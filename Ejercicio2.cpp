#include<iostream>


using namespace std;
int main(){
	int almacen[10];
	float suma, promedio;
	for(int i=0;i<10;i++){
		cout<<"Ingrese total de ventas del  almacen  # "<<i+1;
		cin>>almacen[i];
		suma +=almacen[i];
	}
	promedio = suma/10;
	cout<<"El promedio de ventas total de los almacenes es de: "<<promedio<<endl;
	cout<<"Los almacenes que tienen ventas superiores al promedio: "<<endl;
	for (int i=0;i<10;i++){
		if(almacen[i]>promedio){
			cout<<"Almacen #"<<i+1<<" Venta mensual: "<<almacen[i]<<endl;
		}
	}
}

