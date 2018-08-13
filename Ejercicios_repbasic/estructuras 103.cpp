//comentario
#include<iostream>
#include <string>
#include<stdlib.h>
using namespace std;

bool a1,a2,a3,a4,a5;

struct alumnos{
	string nombre;
	float nota_p[100];
	float nota_f;
};
void estudiante1()
{
	cout<<"ingrese datos del alumno 1"<<endl;
	int y,y1;
	float z,n;
	n=0;
	string x;
	cout<<"ingrese el nombre del alumno"<<endl;
	cin>>x;
	cout<<"ingrese la cantidad de notas"<<endl;
	cin>>y;
	float y2[y];
	cout<<"ingrese las notas"<<endl;
	for(y1=0;y1<y;y1++)
	{
		cin>>y2[y1];
	}
	for(int i=0; i<y;i++)
	{
		n=y2[i]+n;
	}
	n=n/y;
 	alumnos alumno1 ={x,y2[y],n};
 	
  if(n >= 3.5)
 	{
 		cout<<"el estudiante "<<x<<" es apto"<<endl;
 		for(int i =0;i<=50;i++)
 		{
 			system ("color 2F" );
 			system("color 0F");
		 }
 		
	 }
	 else
	 {
	 	cout<<"el estudiante "<<x<<" no es apto"<<endl;
	 	for(int i =0;i<=100;i++)
 		{
 			system("color 4F");
 			system("color 0F");
		 }
	 }
 	
}
void estudiante2()
{
	cout<<"ingrese datos del alumno 2"<<endl;
	int y,y1;
	float z,n;
	n=0;
	string x;
	cout<<"ingrese el nombre del alumno"<<endl;
	cin>>x;
	cout<<"ingrese la cantidad de notas"<<endl;
	cin>>y;
	float y2[y];
	cout<<"ingrese las notas"<<endl;
	for(y1=0;y1<y;y1++)
	{
		cin>>y2[y1];
	}
	for(int i=0; i<y;i++)
	{
		n=y2[i]+n;
	}
	n=n/y;
	
 	alumnos alumno2 ={x,y2[y],n};

  if(n >= 3.5)
 	{
 	cout<<"el estudiante "<<x<<" es apto"<<endl;
 	for(int i =0;i<=50;i++)
 		{
 			system ("color 2F" );
 			system("color 0F");
		 }
	 }
	 else
	 {
	 	cout<<"el estudiante "<<x<<" no es apto"<<endl;
	 	for(int i =0;i<=50;i++)
 		{
 			system ("color 4F" );
 			system("color 0F");
		 }
	 }

}
void estudiante3()
{
	cout<<"ingrese datos del alumno 3"<<endl;
	int y,y1;
	float z,n;
	n=0;
	string x;
	cout<<"ingrese el nombre del alumno"<<endl;
	cin>>x;
	cout<<"ingrese la cantidad de notas"<<endl;
	cin>>y;
	float y2[y];
	cout<<"ingrese las notas"<<endl;
	for(y1=0;y1<y;y1++)
	{
		cin>>y2[y1];
	}
	for(int i=0; i<y;i++)
	{
		n=y2[i]+n;
	}
	n=n/y;

 	alumnos alumno3 ={x,y2[y],n};

  if(n >= 3.5)
 	{
 	cout<<"el estudiante "<<x<<" es apto"<<endl;
 	for(int i =0;i<=50;i++)
 		{
 			system ("color 2F" );
 			system("color 0F");
		 }
	 }
	 else
	 {
	 	cout<<"el estudiante "<<x<<" no es apto"<<endl;
	 	for(int i =0;i<=50;i++)
 		{
 			system ("color 4F" );
 			system("color 0F");
		 }
	 }

}
void estudiante4()
{
	cout<<"ingrese datos del alumno 4"<<endl;
	int y,y1;
	float z,n;
	n=0;
	string x;
	cout<<"ingrese el nombre del alumno"<<endl;
	cin>>x;
	cout<<"ingrese la cantidad de notas"<<endl;
	cin>>y;
	float y2[y];
	cout<<"ingrese las notas"<<endl;
	for(y1=0;y1<y;y1++)
	{
		cin>>y2[y1];
	}
	for(int i=0; i<y;i++)
	{
		n=y2[i]+n;
	}
	n=n/y;

 	alumnos alumno4 ={x,y2[y],n};

  if(n >= 3.5)
 	{
 	cout<<"el estudiante "<<x<<" es apto"<<endl;
 	for(int i =0;i<=50;i++)
 		{
 			system ("color 2F" );
 			system("color 0F");
		 }
	 }
	 else
	 {
	 	cout<<"el estudiante "<<x<<" no es apto"<<endl;
	 	for(int i =0;i<=50;i++)
 		{
 			system ("color 4F" );
 			system("color 0F");
		 }
	 }

}
void estudiante5()
{
	cout<<"ingrese datos del alumno 5"<<endl;
	int y,y1;
	float z,n;
	n=0;
	string x;
	cout<<"ingrese el nombre del alumno"<<endl;
	cin>>x;
	cout<<"ingrese la cantidad de notas"<<endl;
	cin>>y;
	float y2[y];
	cout<<"ingrese las notas"<<endl;
	for(y1=0;y1<y;y1++)
	{
		cin>>y2[y1];
	}
	for(int i=0; i<y;i++)
	{
		n=y2[i]+n;
	}
	n=n/y;

 	alumnos alumno5 ={x,y2[y],n};

  if(n >= 3.5)
 	{
 	cout<<"el estudiante "<<x<<" es apto"<<endl;
 	for(int i =0;i<=50;i++)
 		{
 			system ("color 2F" );
 			system("color 0F");
		 }
	 }
	 else
	 {
	 	cout<<"el estudiante "<<x<<" no es apto"<<endl;
	 	for(int i =0;i<=50;i++)
 		{
 			system ("color 4F" );
 			system("color 0F");
		 }
	 }

}
int main()
{
 estudiante1();
 cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
 estudiante2();
 cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
estudiante3();
 cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
estudiante4();
 cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
 estudiante5();
 cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
system("pause");
return 0;
}

