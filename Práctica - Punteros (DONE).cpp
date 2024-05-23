#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int n=20,*dir_n=&n;
	cout<<"Número: "<<n<<endl;
	cout<<"Dirección de memoria de n: "<<&n<<endl;
	cout<<"----------------------"<<endl;
	cout<<"Número: "<<*dir_n<<endl;
	cout<<"Dirección de memoria de n: "<<dir_n<<endl;
	cout<<"Dirección de memoria de dir_n: "<<&dir_n<<endl;
	return 0;
}
