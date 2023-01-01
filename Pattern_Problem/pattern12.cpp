#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int k = 1; k <= n; k++)
    {
        /* code */
        for (int i = 1; i <= k; i++)
        {
            /* code */
            cout << i << " ";
        }
        for (int i = n; i > k; i--)
        {
            /* code */
            cout << "  ";
        }
        for (int i = n; i > k; i--)
        {
            /* code */
            cout << "  ";
        }
        for (int i = k; i >= 1; i--)
        {
            /* code */
            cout << i << " ";
        }

        cout << endl;
    }
    return 0;
}