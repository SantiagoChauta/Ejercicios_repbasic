//funciones-91
#include<iostream>
using namespace std;
int doble(int x)
{
	x=x*2;
	return x;
}
int cuadrado(int x)
{
	x=x*x;
	return x;
}
int main()
{
	long long int x;
	cout<<"ingrese un numero"<<endl;
	cin>>x;
	cout<<cuadrado(x)-doble(x)<<endl;

system("pause");
return 0;
}

