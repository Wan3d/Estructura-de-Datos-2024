#include <iostream>
using namespace std;
char r;
int factorial(int n, int mult, int resultado)
{
	if (n == 0)
	{
	n=1;
	return 0;
	}
	else
	{
	mult = n * mult;
	cout<<n<<" * "<<mult/n<<" = "<<mult<<endl;
	return factorial(n-1,mult,resultado);
	}
}
int main(int argc, char *argv[]) {
	do{
	system("cls");
	int n,mult=1,resultado;
	cout<<"Ingrese un número: ";
	cin>>n;
	cout<<endl;
	if (n>= 0 && n<=10)
	{
	factorial(n,mult,resultado);
	cout<<endl;
	}
	else
	{
	cout<<"¡Error! Ingrese un número dentro del parámetro válido"<<endl;
	}
	cout<<endl;
	cout<<"¿Desea repetir el proceso nuevamente? (y/n): ";
	cin>>r;
	} while (r == 'Y' || r == 'y');
	return 0;
}

