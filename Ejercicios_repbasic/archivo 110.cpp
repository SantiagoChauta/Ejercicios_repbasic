//comentario
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream archivoa;
	archivoa.open("ASCII.txt",ios::out);
	archivoa<<"c�digo ASCII0 NULL ( car�cter nulo )"<<endl<<
	"c�digo ASCII1 SOH ( inicio encabezado )"<<endl<<
				"c�digo ASCII2 STX ( inicio texto )"<<endl<<
				"c�digo ASCII3 ETX ( fin de texto )"<<endl<<
				"c�digo ASCII4 EOT ( fin transmisi�n )"<<endl<<
				"c�digo ASCII5 ENQ ( enquiry )"<<endl<<
				"c�digo ASCII6 ACK ( acknowledgement )"<<endl<<
				"c�digo ASCII7 BEL ( timbre )"<<endl<<
				"c�digo ASCII8 BS ( back space o retroceso )"<<endl<<
				"c�digo ASCII9 HT ( tabulador horizontal )"<<endl<<
				"c�digo ASCII10 LF ( salto de linea )"<<endl<<
				"c�digo ASCII11 VT ( tabulador vertical )"<<endl<<
				"c�digo ASCII12 FF ( form feed )"<<endl<<
				"c�digo ASCII13 CR ( retorno de carro )"<<endl<<
				"c�digo ASCII14 SO ( shift Out )"<<endl<<
				"c�digo ASCII15 SI ( shift In )"<<endl<<
				"c�digo ASCII16 DLE ( data link escape )"<<endl<<
				"c�digo ASCII17 DC1 ( device control 1 )"<<endl<<
				"c�digo ASCII18 DC2 ( device control 2 )"<<endl<<
				"c�digo ASCII19 DC3 ( device control 3 )"<<endl<<
				"c�digo ASCII20 DC4 ( device control 4 )"<<endl<<
				"c�digo ASCII21 NAK ( negative acknowledgement )";
 archivoa.close();
system("pause");
return 0;
}

