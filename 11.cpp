#include<iostream>
using namespace std;

int main(){
	int n, sum = 0, i;
	cout<<"Enter the nth number :";
	cin>>n;
	for ( i = 1; i<=n; i++){
		if ( i% 2 != 0){
			sum = sum + i;
		}
	}
	cout<<"Sum of odd numbers is :"<<sum;
	return 0;
}
