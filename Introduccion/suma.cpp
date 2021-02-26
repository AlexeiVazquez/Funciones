#include <iostream>
void suma(int,int);

using namespace std;
int main(){
	int a,b;
		cout<<"Introduce el valor 1:";
	cin>>a;
	cout<<"Introduce el valor 2:";
	cin>>b;
	suma(a,b);
	return 0;
}
void suma(int a,int b){
	int c=a+b;
	cout<<"El resultado de "<<a<<"+"<<b<<" es:"<<c<<endl;
}

