#include<iostream>
#include<stdlib.h>

int Max(int a,int b);
using namespace std;

int main(){
	int n1,n2,n3;
	cout<<"introduzca el valor del primer numero: ";
	cin>>n1;
	cout<<"introduzca el valor del segundo numero: ";
	cin>>n2;
	cout<<"introduzca el valor del tercer numero: ";
	cin>>n3;
	int max = Max(Max(n1, n2), n3);
	cout<<"el numero mayor es: "<<max<<endl;
	return 0;
}

int Max(int a,int b){
	int c;
	if(a>b){
	return a;
	}
	else{
	return b;
	}
}
