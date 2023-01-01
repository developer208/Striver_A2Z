#include <iostream>
using namespace std;

int countDigits(int N)
{
    int m = N;
    int count = 0;
    while (N > 0)
    {
        /* code */
        if (N % 10 == 0)
        {
            /* code */
            N = N / 10;
        }
        else
        {
            if (m % (N % 10) == 0)
            {
                /* code */
                count++;
            }
            N = N / 10;
        }
    }
    return count;
}

int main()
{
    int n = 11011;
    cout << countDigits(n);
    return 0;
}