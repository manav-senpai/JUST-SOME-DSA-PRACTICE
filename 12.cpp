#include<iostream>
using namespace std;

int main(){
	int n, sum = 0, i;
	cout<<"Enter the nth number :";
	cin>>n;
	i = 1;
	while ( i <= n) {
		if (i %2 != 0 ){
			sum = sum + i;
		}
		i++;
	}
	cout<<"Sum of odd numbers is :"<<sum;
	return 0;
}
