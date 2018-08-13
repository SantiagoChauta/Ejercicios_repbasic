
#include <iostream>
using namespace std;
int main ()
{
	int horas,minutos,segundos;
	cout<<"Ingrese las horas"<<endl;
	cin>>horas;
	cout<<endl<<"Ingrese los minutos"<<endl;
	cin>>minutos;
	cout<<endl<<"Ingrese los segundos"<<endl;
	cin>>segundos;
	if(minutos>=60 || segundos>=60)
	{
		cout<<"Los minutos y segundos maximo pueden ser hasta 59"<<endl;
	}
	else
	{
		if(horas<0 || minutos<0 || segundos<0)
		{
			cout<<"Las horas, minutos o segundos no pueden ser menores a 0"<<endl;
		}
		else
		{
			segundos+=1;
			if(segundos==60)
			{
				minutos+=1;
				segundos=0;
				if(minutos==60)
				{
					horas+=1;
					minutos=0;
					cout<<endl<<"La hora dentro de un segundo sera "<<horas<<" horas "<<minutos<<" minutos "<<segundos<<" segundos";
				}
				else
				{
					cout<<endl<<"La hora dentro de un segundo sera "<<horas<<" horas "<<minutos<<" minutos "<<segundos<<" segundos";
				}
			}
			else
			{
				cout<<endl<<"La hora dentro de un segundo sera "<<horas<<" horas "<<minutos<<" minutos "<<segundos<<" segundos";
			}
		}
	}
}
