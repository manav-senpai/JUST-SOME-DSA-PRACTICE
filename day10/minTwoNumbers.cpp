#include<iostream> 
using namespace std;

int min ( int a, int b){
    if ( a<b){
        cout<<a<<" is minimum value";
    }else if(a == b){
        cout<<"both numbers are equal";

    }else{
        cout<<b<<" is minimum value";
    }

}

int main(){
    int num1, num2;

    cout<<"Enter the value of a: ";
    cin>>num1;
    cout<<"Enter the value of b: ";
    cin>>num2;
    min(num1, num2);

}