#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int total = n + (n - 1);
    int a = 65;
    for (int i = 1; i <= n; i++)
    {
        /* space */
        for (int j = 1; j <= n - i; j++)
        {
            /* code */
            cout << " ";
        }
        for (int k = 1; k <= total - (2 * (n - i)); k++)
        {
            /* code */
            cout << char(a);
            if ((((total - (2 * (n - i))) / 2) + 1) <= k)
            {
                a--;
            }
            else
            {
                a++;
            }
        }
        a = 65;
        cout << endl;
    }

    return 0;
}