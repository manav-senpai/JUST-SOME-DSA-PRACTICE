#include<iostream>
using namespace std;

int main(){
    int decNum, rem ,ans = 0, power = 1;

    cout<<"Enter the decimal number :";
    cin>> decNum;

    while (decNum > 0){
        rem = decNum % 2;
        decNum = decNum / 2;
        ans += (rem * power);
        power = power * 10;
    }
    cout<<ans;
    return 0;

}
