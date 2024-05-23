#include <iostream>

using namespace std;

int main(int argc, char** argv) {

int array[]={1,2,999};

cout<<"El valor de array es: "<<array<<endl;
cout<<"El valor a donde apunta array es: "<<*array<<endl;
cout<<"Valor de array: "<<array<<endl;
cout<<"Valor a donde apunta array: "<<*array<<endl;
cout<<"Valor de array: "<<&array[0]<<endl;
return 0;
}
