#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int n=20,*dir_n=&n;
	cout<<"N�mero: "<<n<<endl;
	cout<<"Direcci�n de memoria de n: "<<&n<<endl;
	cout<<"----------------------"<<endl;
	cout<<"N�mero: "<<*dir_n<<endl;
	cout<<"Direcci�n de memoria de n: "<<dir_n<<endl;
	cout<<"Direcci�n de memoria de dir_n: "<<&dir_n<<endl;
	return 0;
}
