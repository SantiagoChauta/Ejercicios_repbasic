//factorial
#include <iostream>
using namespace std;
int main()
{
	int a, f, i;
	i=1;
	f=1;
    cout<<"ingrese el numero a calcular el factorial"<<endl;
    cin>>a;
    if (a>=0)
    {
    	while (i<=a)
    	{
    		f=f*i;
    		i++;
		}
		cout<<"el factorial de "<<a<<" es: "<<f<<endl;
	}
	else
	{
		cout<<"el numero ingresado no es posible calcula el factorial"<<endl;
	}
	system("pause");
	return 0;
}
