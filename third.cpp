#include<iostream>
using namespace std;

int main(){
	int marks;
	cout<<"Enter marks :";
	cin>>marks;
	
	if (marks >= 90){
		cout<<"grade is A";
	}
	else if ( marks >=80 && marks < 90) {
		cout<<"Grade is B";
	}
	else{
		cout<<"Grade is C";
	}
	return 0;
}
