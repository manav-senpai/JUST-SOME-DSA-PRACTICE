// write a function to print all prime numbers from 1 to n.

#include<iostream>
using namespace std;

// int PrimeN(int num){
   
//     for(int i = 2; i <= num; i++){
//         int no;
//         bool isPrime = true;
//         for(int j = 2; j<= i/2; j++){
//             if ( j % 2 == 0){
//                 isPrime = false;
//             }
//             if ( isPrime == true){
//                 cout<<j<<endl;
//             }
//         }
//     }
// }
// failed

int PrimeN(int num){
    
    for (int i = 2; i <= num; i++){
        for (int j = 2; j<= i/2; j++){
            if(j % 2 == 0){
                break;
            }
            else{
                cout<<j;
            }
        }
    }

}
int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;

    cout<<PrimeN(n);
    return 0;
}