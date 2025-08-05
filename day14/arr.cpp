#include<iostream>
using namespace std;

int main(){
    int marks[5] = {55,66,33,11,66};

    // loops 
    int size = 5;

    // int sz = sizeof(marks) ;

for (int i=0; i < size;i++){
        cin>> marks[i];
    };

    // cout<<sizeof(marks)/ sizeof(int)<<endl;

    for (int i=0; i < size;i++){
        cout<<marks[i]<<endl;
    };

    // cout<<marks[4];
    return 0;
}