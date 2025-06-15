#include<iostream>
using namespace std;

int main(){
	char ch;
	cout<<"Enter character :";
	cin>>ch;
	
	if ( ch>= 97 && ch <= 122){
		cout<<"The character "<<ch<<" is lowercase";
	}
	else if( ch>=65 && ch <= 90){
		cout<<"The character "<<ch<<" is Uppercase";
	}
	else{
		cout<<"Invalid caharacter";
	}
	return 0;
}
