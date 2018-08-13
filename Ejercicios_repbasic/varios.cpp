//comentario
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int horas,minutos,segundos;
	int horas1,minutos1,segundos1;
	cout<<"ingrese las horas";
	cin>>horas;
	cout<<"ingrese los minutos";
	cin>>minutos;
	cout<<"ingrese los segundos";
	cin>>segundos;
	horas1=0;
	minutos1=0;
	segundos1=0;
	
 reiniciar:
	if(horas1 = horas)
	{

		segundos--;
		
		if(segundos == 0)
		{
			minutos--;
			segundos=59;
		}
		if(minutos == 0)
		{
			minutos=59;
			horas--;
		}

		;
		cout<<horas<<":"<<minutos<<segundos<<endl;
		Sleep(1000);
		system("cls");

	}
	goto reiniciar;

system("pause");
return 0;
}

