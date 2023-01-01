#include<iostream>
using namespace std;
int main(){
    int n=5;
    int temp=1;
    for (int i = 1; i <=n; i++)
    {
        /* code */
        for (int j = 1; j <=i; j++)
        {
            /* code */
            cout<<temp<<" ";
            temp++;
        }
        cout<<endl;
        
        
    }
    
    return 0;
}