#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the nth term :";
    cin >> n;
    cout << "Odd numbers are :" << endl;
    int i = 1, oddSum = 0;

    while (i <= n)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
            oddSum = oddSum + i;
        }
        
        i++;
    }

    cout << "sum of odd numbers till n is :" << oddSum;
    return 0;
}