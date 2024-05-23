#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int cont=0,*dir_cont=&cont,i=1,r=0,*dir_num=&r,array[5];
	int contp=0,conti=0,*dir_conti=&conti,*dir_contp=&contp,j=1,*dir_j=&j,*dir_i=&i;
	while(*dir_cont < 5)
	{
		cout<<"Ingrese número ["<<*dir_i<<"] = ";
		cin>>r;
		*(array+*dir_j) = *dir_num;
		(*dir_j)++;
		if (*dir_num%2 == 0)
		{
			(*dir_contp)++;
			cout<<endl;
			cout<<"Es par. [Contador de pares] = "<<*dir_contp;
			cout<<endl;
			cout<<endl;
		}
		else
		{
			(*dir_conti)++;
			cout<<endl;
			cout<<"Es impar. [Contador de impares] = "<<*dir_conti;
			cout<<endl;
			cout<<endl;
		}
		(*dir_cont)++;
		(*dir_i)++;
	}
	cout<<endl;
	cout<<"---------------------------";
	cout<<endl;
	cout<<endl;
	cout<<"Total pares: "<<*dir_contp;
	cout<<endl;
	cout<<"Total impares: "<<*dir_conti;
	cout<<endl;
	cout<<endl;
	cout<<"---------------------------";
	cout<<endl;
	cout<<endl;
	cout<<"Vector = ["<<*(array+1)<<","<<*(array+2)<<","<<*(array+3)<<","<<*(array+4)<<","<<*(array+5)<<"]"<<endl;
	return 0;
}

