#include <iostream>
using namespace std;
char res;
int resultado;
int Potencia(int potencia, int numero, int z, int mult){
	if (potencia == 0)
	{
	return 1;
	}
	else
	{
	mult = mult * numero;
	cout<<numero<<" * "<<mult/numero<<" = "<<mult<<endl;
	resultado=mult;
	return Potencia(potencia-1, numero, z, mult);
	}
	return mult;
}

int main(int argc, char *argv[]) {
	do{
	system("cls");
	int potencia,numero,z=1, mult=1;
	cout<<"Ingrese un número (1-10): ";
	cin>>numero;
	if (numero >= 0 && numero <= 10)
	{
	cout<<endl;
	cout<<"Ingrese la potencia a elevar: ";
	cin>>potencia;
	cout<<endl;
	if (potencia >= 0)
	{
	Potencia(potencia,numero,z,mult);
	cout<<endl<<"("<<numero<<")^"<<potencia<<" = "<<resultado<<endl<<endl;
	}
	else 
	{
	cout<<endl<<"¡Error! Ingrese un número dentro del parámetor válido"<<endl<<endl;
	}
	}
	else
	{
	cout<<endl<<"¡Error! Ingrese un número dentro del parámetro válido"<<endl<<endl;
	}
	cout<<"------------------------"<<endl<<endl;
	cout<<"¿Desea repetir la operación? (y/n) : ";
	cin>>res;
	resultado=1;
	} while (res == 'y' || res == 'Y');
	return 0;
}
