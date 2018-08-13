#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;
int main()
{
	int n;
	do
	{
	cout<<"ingrese un numero del 1 al 7 y se indiccara el correspondiente dia de la semana"<<endl;
	cin>>n;
	if(n<1 || n>7)
	{
		cout<<"porfavor digite un numero valido"<<endl;
	}
			}
while(n<1 || n>7);

switch(n)
	{
		case 1: cout<<"lunes"<<endl;
		break;
		case 2: cout<<"martes"<<endl;
		break;
		case 3: cout<<"miercoles"<<endl;
		break;
		case 4: cout<<"jueves"<<endl;
		break;
		case 5: cout<<"viernes"<<endl;
		break;
		case 6: cout<<"sabado"<<endl;
		break;
		case 7: cout<<"domingo"<<endl;
		break;
	}
}
