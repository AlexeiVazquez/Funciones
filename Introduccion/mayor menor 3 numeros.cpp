#include<iostream>
int max(int,int);
using namespace std;
int main(){
	int a,b,d;
	cout<<"Introduzca el valor del primer numero: "<<endl;
	cin>>a;
	cout<<"Introduzca el valor del segundo numero: "<<endl;
	cin>>b;
	cout<<"Introduzca el valor del tercer numero: "<<endl;
	cin>>d;
	int max1=max(a,b);
	int max2=max(max1,d);
	cout<<"El numero mayor es: "<<max2<<endl;
	return 0;
}
int max(int a, int b){
	int c;
	if(a>b){
		c=a;
	}
	else {
		c=b;
	}
return c;
}
