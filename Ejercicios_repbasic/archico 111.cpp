//comentario
#include<iostream>
#include<fstream>
#include<string>.h
using namespace std;
int main()
{
  ifstream archivoa;
  string t;
  archivoa.open("ASCII.txt",ios::in);
	while(!archivoa.eof())
	{
		getline(archivoa,t);
		cout<<t<<endl;
	}
	archivoa.close();
system("pause");
return 0;
}

