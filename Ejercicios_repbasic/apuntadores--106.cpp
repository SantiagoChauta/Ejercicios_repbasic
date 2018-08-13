//comentario
#include<iostream>
using namespace std;
int main()
{
	int x;
	float y;
	double z;
	
	int *a;
	float *b;
	double *c;
	
	a=&x;
	b=&y;
	c=&z;
	
	cout<<"ingrese un entero"<<endl;
	cin>>*a;
	cout<<"ingrese un numero tipo float"<<endl;
	cin>>*b;
	cout<<"ingrese un entero largo"<<endl;
	cin>>*c;
	
	cout<<*a<<endl;
	cout<<*b<<endl;
	cout<<*c<<endl;
system("pause");
return 0;
}

