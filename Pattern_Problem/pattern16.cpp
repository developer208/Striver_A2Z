#include<iostream>
using namespace std;
int main(){
    int n=5;
    int a=65;
    for (int i =1; i<=n; i++)
    {
        /* code */
        for (int j =1; j <=i; j++)
        {
            /* code */
            cout<<char(a);
        }
        cout<<endl;a++;
        
    }
    
    return 0;
}