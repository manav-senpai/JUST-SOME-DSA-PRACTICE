#include<iostream>
using namespace std;

int main(){
	char ch;
	cout<<"Enter character :";
	cin>>ch;
	
	if ( ch>= 'a' && ch <= 'z'){
		cout<<"The character "<<ch<<" is lowercase";
	}
	else if( ch>='A' && ch <= 'Z'){
		cout<<"The character "<<ch<<" is Uppercase";
	}
	else{
		cout<<"Invalid caharacter";
	}
	return 0;
}
