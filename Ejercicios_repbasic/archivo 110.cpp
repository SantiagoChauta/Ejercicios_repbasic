//comentario
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream archivoa;
	archivoa.open("ASCII.txt",ios::out);
	archivoa<<"código ASCII0 NULL ( carácter nulo )"<<endl<<
	"código ASCII1 SOH ( inicio encabezado )"<<endl<<
				"código ASCII2 STX ( inicio texto )"<<endl<<
				"código ASCII3 ETX ( fin de texto )"<<endl<<
				"código ASCII4 EOT ( fin transmisión )"<<endl<<
				"código ASCII5 ENQ ( enquiry )"<<endl<<
				"código ASCII6 ACK ( acknowledgement )"<<endl<<
				"código ASCII7 BEL ( timbre )"<<endl<<
				"código ASCII8 BS ( back space o retroceso )"<<endl<<
				"código ASCII9 HT ( tabulador horizontal )"<<endl<<
				"código ASCII10 LF ( salto de linea )"<<endl<<
				"código ASCII11 VT ( tabulador vertical )"<<endl<<
				"código ASCII12 FF ( form feed )"<<endl<<
				"código ASCII13 CR ( retorno de carro )"<<endl<<
				"código ASCII14 SO ( shift Out )"<<endl<<
				"código ASCII15 SI ( shift In )"<<endl<<
				"código ASCII16 DLE ( data link escape )"<<endl<<
				"código ASCII17 DC1 ( device control 1 )"<<endl<<
				"código ASCII18 DC2 ( device control 2 )"<<endl<<
				"código ASCII19 DC3 ( device control 3 )"<<endl<<
				"código ASCII20 DC4 ( device control 4 )"<<endl<<
				"código ASCII21 NAK ( negative acknowledgement )";
 archivoa.close();
system("pause");
return 0;
}

