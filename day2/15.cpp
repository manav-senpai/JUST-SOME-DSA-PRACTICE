#include<iostream>
using namespace std;
//function definition
double sum (double a, double b){
	int s= a+b;
	return s;
}

int minOfTwo(int a, int b){
	if (a<b){
		return a;
	}else{
		return b;
	}
}

int main(){
	//function call / invoke
	cout<<"Min =" <<minOfTwo(45,74)<<endl;
	cout<<"sum =" <<sum(5,45)<<endl;
		
	return 0;
}
