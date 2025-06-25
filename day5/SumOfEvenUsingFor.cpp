#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the nth term :";
    cin >> n;
    cout << "The even numbers till " << n << "are"<<endl;
    int evenSum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            evenSum += i;
            cout << i << endl;
        }
    }
    cout << evenSum << endl;

    return 0;
}