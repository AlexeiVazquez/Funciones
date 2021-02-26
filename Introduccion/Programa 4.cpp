#include<iostream>
int  max(int,int);
using namespace std;
int main(){
	int a,b,d;
	cout<<"Introduzca el valor del primer numero: "<<endl;
	cin>>a;
	cout<<"Introduzca el valor del segundo numero: "<<endl;
	cin>>b;
	cout<<"Introduzca el valor del tercer numero: "<<endl;
	cin>>d;
	int max1=max(max(a,b),d);
	
	cout<<"El numero mayor es: "<<max1<<endl;
	return 0;
}
int max(int a, int b){
	int c;
	if(a>b){
	return a;
	}
	else {
		return b ;
	}
}
