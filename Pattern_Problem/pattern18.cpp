#include<iostream>
using namespace std;
int main(){
    int n=5;
    int a=65+n-1;
    for (int i = 1; i <=n ; i++)
    {
        /* code */
    
        for ( int j = 1; j <=i ; j++)
        {
            /* code */
            cout<<char(a)<<" ";
            a--;
        }
        a=65+n-1;
        cout<<endl;
        
    }
    
    return 0;
}