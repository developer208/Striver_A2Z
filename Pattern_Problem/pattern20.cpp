#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        for (int j = 1; j <= i; j++)
        {
            /* code */
            cout << "*";
        }
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            /* space */
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            /* code */
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        /* code */
        for (int j = 1; j <= i; j++)
        {
            /* code */
            cout << "*";
        }
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            /* space */
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            /* code */
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}