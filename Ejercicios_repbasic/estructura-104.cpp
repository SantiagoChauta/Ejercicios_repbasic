//comentario
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<windows.h>
using namespace std;
struct persona{
	string nombre;
	char sexo;
	int edad;
	float peso;
	string color_pelo;
	string color_piel;
	string color_ojos;
	string nacionalidad;
	long long int telefono;
	
	
	
}personas[5];
int main()
{
for(int i=0;i<5;i++)
{
	cout<<"datos da la persona numero "<<i+1<<endl<<endl;
	cout<<"nombre"<<endl;
	cin>>(personas[i].nombre);
	cout<<"sexo"<<endl;
	cin>>(personas[i].sexo);
	cout<<"edad"<<endl;
	cin>>(personas[i].edad);
	cout<<"peso"<<endl;
	cin>>(personas[i].peso);
	cout<<"color de pelo"<<endl;
	cin>>(personas[i].color_pelo);
	cout<<"color de piel"<<endl;
	cin>>(personas[i].color_piel);
	cout<<"color de ojos"<<endl;
	cin>>(personas[i].color_ojos);
	cout<<"nacionalidad"<<endl;
	cin>>(personas[i].nacionalidad);
	cout<<"telefono"<<endl;
	cin>>(personas[i].telefono);
	system("cls");
}

system("pause");
return 0;
}

