//comentario
#include<iostream>
using namespace std;
int main()
{
	int *a[20],w[20],y;
	double x[20], *b[20],z[20],*c[20];

	cin>>y;
	
	for(int i=0;i<y;i++)
	{
		cin>>x[i];
		
		a[i]=&w[i];
		b[i]=&x[i];
		c[i]=&z[i];
	}

	for(int i=0;i<y;i++)
	{
		*a[i]=*b[i]/1;
		*c[i]=*b[i]-*a[i];
	}
	
	cout<<"Parte entera "<<" parte decimal"<<endl;
	
	

	for(int i=0;i<y;i++)
	{
	
		
		cout<<"   "<<*a[i]<<"      ||    "<<*c[i]<<endl;

	}
system("pause");
return 0;
}

