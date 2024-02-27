#include <iostream>
using namespace std;

int TablasMultiplicar(int cont=10,int n=10,int resultado=0)
{
	if (n == 1)
	{
		cout<<cont<<" x "<<n<<" = "<<cont;
		cout<<endl;
	}
	else
	{
		resultado = cont * n;
		cout<<cont<<" x "<<n<<" = "<<resultado;
		cout<<endl;
		return TablasMultiplicar(cont,n-1,resultado);
		
	}
	return 0;
}
int MostrarTablas(int cont=10,int n=10,int resultado=0,int cont2=10) {
	if (cont2 >= 1 && cont2 <= 10)
	{
	cout<<"--------"<<endl;
	cout<<endl<<"Tabla del "<<cont2<<endl;
	cout<<endl<<"--------"<<endl;
	cout<<endl;
	TablasMultiplicar(cont,n,resultado);
	return MostrarTablas(cont-1,n,resultado,cont2-1);
	}
	return 0;
}
int main()
{
int cont=10,n=10,resultado=0,cont2=10;
MostrarTablas(cont=10,n=10,resultado=0,cont2=10);
}
