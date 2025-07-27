#include<iostream> 
using namespace std;

int Compliment(int num){
    int ans = 0, rem, power = 1;

    while(num>0){
        rem = num % 10;
        ans += ( power * rem );
        num = num /10;
        power = power * 2;

    }
    return ans;

};

int main(){
cout<<Compliment();

}