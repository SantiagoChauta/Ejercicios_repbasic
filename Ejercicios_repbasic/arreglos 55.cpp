
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
	if(horas1 != horas)
	{

		segundos1++;

		if(segundos1 == 60)
		{
			minutos1++;
			segundos1=0;
		}
		if(minutos1 == 60)
		{
			minutos1=0;
			horas1++;
		}

		;
		cout<<horas1<<":"<<minutos1<<segundos1<<endl;
		Sleep(1000);
		system("cls");

	}
	goto reiniciar;

system("pause");
return 0;
}


