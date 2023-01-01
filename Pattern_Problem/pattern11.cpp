#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int bit = 1;
    int bit2 = bit;

    for (int j = 1; j <= n; j++)
    {
        /* code */
        for (int i = 0; i < j; i++)
        {
            cout << bit2 << " ";
            bit2 = bit2 ^ 1;
        }

        bit2 = bit ^ 1;
        bit = bit2;
        cout << endl;
    }

    return 0;
}