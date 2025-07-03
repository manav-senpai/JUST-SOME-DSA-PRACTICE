//assignment >> write a function to check if the number is prime or not

#include<iostream>
using namespace std;

void Prime(int n){
    bool isPrime = true;
    for (int i = 2; i<= (n/2); i++){
        if ( n % i == 0 ){
            isPrime = false;
        }
        
    }
    if ( isPrime == true){
        cout<<"prime number";
    }
    else{
        cout<<"non prime number";
    }

}

int main(){
    cout<<"Enter the number to check :";
    int num;
    cin>>num;
    Prime(num);

    return 0;
}