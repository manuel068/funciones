#include<stdio.h>
#include<iostream>
#include<stdlib.h>

void max(int a,int b);
using namespace std;

int main(){
	int n1,n2;
	cout<<"introduzca el valor del primer numero: ";
	cin>>n1;
	cout<<"introduzca el valor del segundo numero: ";
	cin>>n2;
	max(n1,n2);
	
	return 0;
}
void max(int a, int b){
	if(a>b){
		cout<<"es mayor "<<a<<endl;
	}
	else if(a<b){
		cout<<"es mayor "<<b<<endl;
	}
	else
	    cout<<"error";
}

