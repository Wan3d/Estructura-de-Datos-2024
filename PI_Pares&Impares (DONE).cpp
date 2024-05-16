#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	int cont=0,*dir_cont=&cont,i=1,*dir_num,r=0;
	int contp=0,conti=0,*dir_conti=&conti,*dir_contp=&contp;
	srand(time(NULL));
	while(*dir_cont < 5)
	{
	r = rand() % 100 + 1;
	dir_num=&r;
	cout<<"Número ["<<i<<"]: "<<*dir_num<<endl<<endl;
	if (*dir_num%2 == 0)
	{
	contp++;
	dir_contp=&contp;
	}
	else
	{
	conti++;
	dir_conti=&conti;
	}
	cont++;
	dir_cont=&cont;
	i++;
	}
	cout<<"---------------------------";
	cout<<endl;
	cout<<endl;
	cout<<"Total pares: "<<*dir_contp;
	cout<<endl;
	cout<<"Total impares: "<<*dir_conti;
	cout<<endl;
	cout<<endl;
	cout<<"---------------------------";
	return 0;
}

