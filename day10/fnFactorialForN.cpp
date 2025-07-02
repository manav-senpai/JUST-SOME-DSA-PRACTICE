#include<iostream>
using namespace std;

int Factorial(int f){
    int final = 1;
    for( int i = f; i> 0; i--) {
        final = final* i;
    }   
    return final;

}


int main(){

    cout<<Factorial(5);
    
}