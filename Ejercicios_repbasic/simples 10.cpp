#include <iostream>
using namespace std;
int main()
{
	float distancia,velocidad,tiempo;
	cout<<"Ingrese la distacia recorrida en Km"<<endl<<endl;
	cin>>distancia;
	cout<<endl<<"Ingrese el tiempo que tardo el proyectil en minutos"<<endl<<endl;
	cin>>tiempo;
	distancia*=1000;
	tiempo*=60;
	velocidad= distancia/tiempo;
	cout<<endl<<"La velocidad es "<<velocidad<<" metros/segundo ";
}
