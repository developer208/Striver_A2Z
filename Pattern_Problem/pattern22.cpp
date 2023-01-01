#include<iostream>
using namespace std;
int main(){
    int n=4;
    for (int row = 0; row < n; row++)

  {

    if (row == 0 || row == n - 1)

    {

      for (int col = 0; col < n; col++)

      {

        cout <<n<<" ";
      }

      cout << endl;
    }

    else
    {

      for (int col = 0; col < n; col++)

      {

        if (col == 0 || col == n - 1)

        {

          cout <<n<<" ";
        }

        else
        {

          cout << "  ";
        }
      }

      cout << endl;
    }
  }
    return 0;
}