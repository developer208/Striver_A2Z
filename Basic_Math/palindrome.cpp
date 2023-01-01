#include <iostream>
using namespace std;

string is_palindrome(int n)
{
    int m = n;
    int result = 0;

    while (m > 0)
    {
        /* code */
        int rem = m % 10;
        result = result * 10 + rem;
        m = m / 10;
    }
    if (result == n)
    {
        /* code */
        return "Yes";
    }
    else
    {
        return "No";
    }
}

int main()
{
    int n = 101;
    cout << is_palindrome(n);

    return 0;
}