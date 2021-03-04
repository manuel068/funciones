#include<iostream>
#include<string.h>

using namespace std;

void suma(string a,string b);

int main(){

	string n1, n2;
	cout<<"intrduzca el valor del primer operando: ";
	cin>>n1;
	cout<<"introduzca el valor del segundo operando: ";
	cin>>n2;
    suma (n1,n2);
	
}

void suma(string a,string b){ 
    string c = a + b;
	cout<<"el resultado de "<<a<<"+" <<b<<" es: "<<c<<endl;
}

