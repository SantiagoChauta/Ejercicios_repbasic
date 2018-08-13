//recursividad-98
#include<iostream>
using namespace std;

int potencia(int x,int y)
{
	if(x == 1)
	{
		return y;
	}
	else
	{
  		return y*potencia(x-1,y);
	}
	
 
}

int main()
{
	int x,m,y;
	cout<<"ingrese la potencia a la que va a elevar"<<endl;
	cin>>x;
	cout<<"ingrese el numero a elevar"<<endl;
	cin>>y;
	m=potencia(x,y);

	cout<<m<<endl;

system("pause");
return 0;
}

