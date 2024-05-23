#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n=0,*dir_n=&n,cont=0,*dir_cont=&cont,i=0,*dir_i=&i,array[4],val=0,*dir_val=&val;
	while (*dir_cont < 4)
	{
	cout<<"Ingrese un número (1>=n<=10): ";
	cin>>n;
	cout<<endl;
	if (*dir_n >= 1 && *dir_n <= 10)
	{
	(array[*dir_cont]) = *dir_n;
	for (*dir_i = 0 ; *dir_i < 4 ; (*dir_i)++)
	{
	if ((array[*dir_i]) == (array[*dir_cont]) && *dir_i != *dir_cont)
	{
	while (*dir_n == (array[*dir_i]))
	{
	cout<<"¡Número repetido! Ingrese un número válido: ";
	cin>>n;
	while (*dir_n < 1 || *dir_n > 10)
	{
	cout<<"¡Número fuera de rango! Ingrese un número válido: ";
	cin>>n;
	}
	cout<<endl;
	}
	(array[*dir_i+1]) = *dir_n;
	}
	}
	(*dir_cont)++;
	cout<<"[Guardado en el vector]"<<endl;
	cout<<endl<<"----------------------------"<<endl;
	}
	else
	{
	cout<<"Ingrese un número dentro del rango"<<endl<<endl;
	}
	}
	cout<<endl<<"---------------------------------------------"<<endl;
	for (*dir_i = 0 ; *dir_i < 4 ; (*dir_i)++)
	{
	cout<<"- Posición ["<<*dir_i+1<<"] = "<<array[*dir_i]<<endl;
	}
	return 0;
}

