#include <iostream>
using namespace std;
int main()
{
  int n = 4;

  // 1) fail idk why

  // for (int i = 1; i <= n; i++)
  // {
  //     /* code */
  //     cout << "*";
  // }
  // cout << endl;

  // for (int i = 2; i < n; i++)
  // {
  //     /* code */
  //     cout << "*";
  //     for (int j = 1; j <= n - 2; j++)
  //     {
  //         /* code */
  //         cout << " ";
  //     }
  //     cout << "*";
  //     cout << endl;
  // }

  // if (n > 1)
  // {
  //     for (int i = 1; i <= n; i++)
  //     {
  //         /* code */
  //         cout << "*";
  //     }
  // }

  // 2nd way

  for (int row = 0; row < n; row++)

  {

    if (row == 0 || row == n - 1)

    {

      for (int col = 0; col < n; col++)

      {

        cout << "*";
      }

      cout << endl;
    }

    else
    {

      for (int col = 0; col < n; col++)

      {

        if (col == 0 || col == n - 1)

        {

          cout << "*";
        }

        else
        {

          cout << " ";
        }
      }

      cout << endl;
    }
  }

  return 0;
}