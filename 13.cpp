#include<iostream>
using namespace std;

int main(){
	int n, i;
	bool isprime = true;
	
	cout<<"Enter the number :";
	cin>>n;
	 
	for ((i=2); i<=(n-1); i++ ){
		if ( n % i == 0){
			isprime = false;
			break;
		}
		
	}
	if (isprime == true){
		cout<<"Prime number";
		
	}
	else{
		cout<<"Non Prime Number";
	}
	return 0;
}
