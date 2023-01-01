#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int total = n + (n - 1);

    for (int j = 1; j <= n; j++)
    {
        for (int k = 1; k <= n - j; k++)
        {
            cout << " ";
        }
        for (int l = 1; l <= total - (2 * (n - j)); l++)
        {
            /* code */
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}