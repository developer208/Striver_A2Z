#include <iostream>
using namespace std;

long long sumOfSeries(long long N)
{
    // this is not in constant time complexity
    // if (N == 1)
    // {
    //     return 1;
    // }
    // else
    // {
    //     return N * N * N + sumOfSeries(N - 1);
    // }

    //in O(1) time & space complexity
    long long sum;
    sum=(N*(N+1)/2)*(N*(N+1)/2);
    return sum;
}

int main()
{
    long long n = 5;
    cout << sumOfSeries(n);

    return 0;
}