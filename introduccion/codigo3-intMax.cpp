#include<stdio.h>
#include<iostream>

int max(int a,int b);

using namespace std;

int main(){
	int n1,n2,n3;
	cout<<"introduzca el valor del primer numero: ";
	cin>>n1;
	cout<<"introduzca el valor del segundo numero: ";
	cin>>n2;
	cout<<"introduzca el valor del tercer numero: ";
	cin>>n3;
	int max1 = max(n1,n2);
	int max2 = max(max1,n3);
	
	cout<<"el numero mayor es: "<<max2<<endl;
	
	return 0;
}
int max(int a,int b){
	int c;
	if(a>b){c = a;}
	else{c =  b;}
	return c;
}
