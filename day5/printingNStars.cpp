#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the number of lines you wanna print :";
    cin >> m;
    cout << "Enter the number of stars you wanna print :";
    cin >> n;

    for (int i = 1; i <= m; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }
    return 0;
}