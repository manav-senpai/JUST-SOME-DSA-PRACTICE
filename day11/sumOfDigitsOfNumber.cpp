// calculate the sum of digits of a number

#include<iostream>
using namespace std;

int Sum(int num){
    int sum = 0;
    int digit;
    while ( num > 0){
        digit = num % 10;
        num = num / 10;
        sum = sum + digit;
    }
    return sum;

}

int main(){
    cout<<"Enter the number to calculate sum :";
    int num1;
    cin>>num1;

    cout<<Sum(num1)<<endl;

    return 0;
}



