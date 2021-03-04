#include<stdio.h>
#include<iostream>

using namespace std;

int factorial(int a);

int main(){
	int n1;
	cout<<"introduzca el valor del numero: "<<endl;
	cin>>n1;
	int fact = factorial(n1);
	cout<<"el factorial de ese numero es: "<<fact<<endl;
	return 0;
}

int factorial(int a){
	int i;
	int resultado=1;
	for(i=1; i<=a; i++){
		resultado *=i;
	}
	return resultado;
}
