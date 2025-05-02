#include<iostream>
using namespace std;

int main(){
	int a,b;
	
	cout<<"Enter first no :";
	cin>> a;
	cout<<"Enter second no :";
	cin>> b;
	
	cout<<"CALULATOR"<<endl;
	cout<<"Addition of first and second no :" << (a + b)<<endl;
	cout<<"Substraction of first and second no :"<< (a - b)<<endl;
	cout<<"Multiplication of first and second no :"<< ( a * b)<< endl;
	cout<<"Division of first and second no :"<< ( float(a) / b ) << endl;
	return 0;

}

