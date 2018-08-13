//recursividad-102
#include<iostream>
using namespace std;
int suma(int x)
{
	if(x == 1)
	{
		return 1;
	}
	else
	{
		return x + suma(x-1);
	}
}

int main()
{
	int x,y;
	cin>>x;
	y=suma(x);
	
	cout<<y<<endl;

system("pause");
return 0;
}

