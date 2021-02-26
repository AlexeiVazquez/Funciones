#include<iostream>
void max(int,int);
using namespace std;
int main(){
	int a,b;
	cout<<"Introduzca el valor del primer numero: "<<endl;
	cin>>a;
	cout<<"Introduzca el valor del segundo numero: "<<endl;
	cin>>b;
	max(a,b);
	return 0;
}
void max(int a, int b){
	if(a>b){
		cout<<a <<" es mayor"<<endl;
	}
	else if (a<b){
		cout<<b<<"es mayor"<<endl;
	}
	else
	cout<<"Error"<<endl;
}
