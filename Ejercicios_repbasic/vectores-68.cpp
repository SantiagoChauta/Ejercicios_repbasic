
//comentario
#include<iostream>
using namespace std;
int main()
{
int matriz[2][5],resultado1,resultado2;

matriz[0][0]=5;
matriz[0][1]=6;
matriz[0][2]=7;
matriz[0][3]=9;
matriz[1][0]=11;
matriz[1][1]=8;
matriz[1][2]=2;

resultado2=0;
resultado1=0;

for(int i=0;i<=1;i++)
{
	if(i == 1)
	{
		for(int j=0;j<3;j++)
		{

		resultado2=matriz[i][j]+resultado2;

		}
	}
	else
	{
		for(int j=0;j<4;j++)
		{

		resultado1=matriz[i][j]+resultado1;

		}
	}
	
	
}
matriz[0][4]=resultado1;
matriz[1][3]=resultado2;

cout<<matriz[0][4]<<endl;
cout<<matriz[1][3]<<endl;

system("pause");
return 0;
}

