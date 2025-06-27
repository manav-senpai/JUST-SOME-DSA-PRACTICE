#include<iostream>
using namespace std;

int main(){
    cout<<"Enter ther value of n :";
    int n;
    cin>>n;


    // for (int i= 1; i<= n ; i++){
    //     for(int j = 1; j <= n; j++){
    //        if(j == 1){
    //         cout<<"A ";
    //        }
    //        else if(j == 2){
    //         cout<<"B ";
    //        }
    //        else if( j == 3){
    //         cout<<"C ";
    //        }
    //        else if(j == 4){
    //         cout<<"D ";
    //        }

    //     }
    //     cout<<endl;
    // }

    for (int i= 1; i<= n ; i++){
        char ch= 'A';
        for (int j = 1; j<=n ; j++){
            cout<<ch<<" ";
            ch += 1;
        }
        cout<<endl;
    }
    return 0;
} 