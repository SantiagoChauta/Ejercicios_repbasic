//funciones-94
#include<iostream>
#include<stdlib.h>
using namespace std;
void dia(int x)
{

	switch(x)
	{
		case 1:cout<<"31"<<endl;
		break;
		case 2:cout<<"28"<<endl;
		break;
		case 3:cout<<"31"<<endl;
		break;
		case 4:cout<<"30"<<endl;
		break;
		case 5:cout<<"31"<<endl;
		break;
		case 6:cout<<"30"<<endl;
		break;
		case 7:cout<<"31"<<endl;
		break;
		case 8:cout<<"31"<<endl;
		break;
		case 9:cout<<"30"<<endl;
		break;
		case 10:cout<<"31"<<endl;
		break;
		case 11:cout<<"30"<<endl;
		break;
		case 12:cout<<"31"<<endl;
		break;
		}
		
			
	}

int main()
{

int x;

cout<<"porfavor ingresar un numero del 1 al 12"<<endl;

do
{
	cin>>x;
	if(x<=0 || x>12)
	{
		cout<<"por favor ingrese numero valido"<<endl;
		for(int i=0;i<=20;i++)
		{
		system ("color 4F" );
		system ("color 0F" );
		system ("color 4F" );
		system ("color 0F" );
		}
		system("cls");
	}


}while(x<=0 || x>12);

	dia(x);

system("pause");
return 0;
}

