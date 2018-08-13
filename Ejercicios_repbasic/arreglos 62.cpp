#include <iostream>
using namespace std;
int main()
{
	int vector[10],i,valmax,valmin;
	i=1;
	while(i<=10)
	{
		cout<<endl<<"Ingrese el numero del arreglo en la posicion "<<i<<endl;
		cin>>vector[i];
		i++;
	}
	valmax=vector[1];
	valmin=vector[1];
	for(i=1;i<=10;i++)
	{
		if(vector[i]>valmax)
		{
			valmax=vector[i];
			i=1;
		}
		else
		{
		}
	}
	for(i=1;i<=10;i++)
	{
		if(vector[i]<valmin)
		{
			valmin=vector[i];
			i=1;
		}
	}
	cout<<"El valor maximo es: " <<valmax<<endl;
	cout<<"El valor minimo es: " <<valmin<<endl;
}
