#include<iostream>
using namespace std;

int main(){

    int rem, ans = 0, power = 1, num;
    cout<<"Enter the binary number :";
    cin>>num;

    while(num>0){
        rem = num % 10;
        ans += ( power * rem );
        num = num /10;
        power = power * 2;

    }

    cout<<ans;
    return 0;
}