#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the value of n :";
    cin >> n;
    char ch = 'A';
    // reverse square... fuck

    // for (int i = 1; i <= n; i++)
    // {
    //     for (char ch1 = (ch + n); ch1 > (ch - 1); ch1--)
    //     {
    //         cout << ch1 << " ";
    //     }

    //     cout << endl;
    // }

    // reverse triangle..
    
    for (int i = 1; i <= n; i++){
        char ch2 = ch+ i;
        for (int j = 1; j <= i; j++)
        {
            char ch3 = ch2-1;
            cout<<ch3<<" ";
            ch2 --;
        }
        cout << endl;
    }

    return 0;
}