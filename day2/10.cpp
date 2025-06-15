#include<iostream>
using namespace std;

int main(){
	int i, sum = 0, n;
	cout<<"Enter the nth number :";
	cin>>n;
	i = 1;
	for (i = i; i<= n; i+= 2){
		sum = sum + i;
	}
	cout<<"The sum of odd numbers is :"<<sum<<endl;
	return 0;
}
