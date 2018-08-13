//vectores-60
#include<iostream>
using namespace std;
int main()
{
	int mayor;
	mayor=0;
	int matriz[3][3];
	matriz[0][0]=32;
	matriz[0][1]=56;
	matriz[0][2]=50;
	matriz[1][0]=49;
	matriz[1][1]=99;
	matriz[1][2]=12;
	matriz[2][0]=78;
	matriz[2][1]=57;
	matriz[2][2]=89;
	
	for(int i=0; i<=2;i++)
	{
		for(int j=0; j<=2;j++)
		{
   			if (matriz[i][j]>mayor)
			{
				mayor= matriz[i][j];
   			}
		}
	}

cout<<mayor<<endl;
system("pause");
return 0;
}

