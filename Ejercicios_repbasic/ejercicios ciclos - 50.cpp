#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int s,n,c[100],i[100],o,resultado1;
	s=0;
	o=0;
	for(n=0;n<=200;n++)
	{
		if(n%2 == 0)
		{
			
			c[s]=n;
			s++;
		}
		else{
			i[o]=n;
			o++	;
		}
		}	
		for( int a =0;a<=100;a++)
		{
			resultado1 = c[a] + resultado1;
			
		}
		cout<<"suma pares: "<<resultado1<<endl;
		resultado1= resultado1/100;
		cout<<"media pares: "<<resultado1<<endl;
		resultado1 = 0;
		;
		for( int a =0;a<=100;a++)
		{
			resultado1 = i[a] + resultado1;
			
		}
		cout<<"suma impares: "<<resultado1<<endl;
		resultado1= resultado1/100;
		cout<<"media impares: "<<resultado1<<endl;
		
}
