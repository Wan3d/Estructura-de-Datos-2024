// Estructura de datos
// Grupo 6A
// Maribel Bueno Qui�ones
// Equipo 8
// Zullo Bol�var Jean Piero Nicol�s
// P1-15/04/24-Estructura Domicilio



#include <iostream>
using namespace std;

struct Informacion{
	string calle[2];
	int numero[2];
	string ciudad[2];
	
} Domicilio;


void AgregarInformacion ()
{
for (int i = 0;i<2;i++)
{
	cout<<"Ingrese la calle de la posici�n ["<<i+1<<"]: ";
	cin>>Domicilio.calle[i];
	cout<<endl;
	cout<<"Ingrese el n�mero de la posici�n ["<<i+1<<"]: ";
	cin>>Domicilio.numero[i];
	cout<<endl;
	cout<<"Ingrese la ciudad de la posici�n ["<<i+1<<"]: ";
	cin>>Domicilio.ciudad[i];
	cout<<endl;
}
}


void Imprimir()
{
for (int i=0;i<2;i++)
{
cout<<endl;
cout<<"Calle ["<<i+1<<"]: "<<Domicilio.calle[i];
cout<<endl;
cout<<"N�mero ["<<i+1<<"]: "<<Domicilio.numero[i];
cout<<endl;
cout<<"Ciudad ["<<i+1<<"]: "<<Domicilio.ciudad[i];
cout<<endl;
}
}

int main(int argc, char *argv[]) {
	AgregarInformacion();
	cout<<endl<<"--------------------------------------------------"<<endl;
	Imprimir();
	return 0;
}

