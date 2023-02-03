#include <iostream>
using namespace std;

int main()
{

    // _ _ _ _ *
    // _ _ _ * * *
    // _ _ * * * * *
    // _ * * * * * * *
    // * * * * * * * * *

    // int n;
    // cin >> n;
    // for(int row = 0 ; row < n ; row++){

    //     //spaces
    //     for(int col=0 ; col<n-row-1 ; col++){
    //         cout<<" ";
    //     }
    //     for(int col = 0 ; col < row+1; col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;

    // }

    //     *
    //    * *
    //   * * *
    //  * * * *
    // * * * * *
    // * * * * *
    //  * * * *
    //   * * *
    //    * *
    //     *

    // int n;
    //     cin >> n;
    //     for(int row = 0 ; row < n ; row++){

    //         //spaces
    //         for(int col=0 ; col<n-row-1 ; col++){
    //             cout<<" ";
    //         }
    //         for(int col = 0 ; col < row+1; col++){
    //             cout<<"* ";
    //         }
    //         cout<<endl;

    //     }
    //     for(int row = 0 ; row < n ; row++){

    //         //spaces
    //         for(int col=0 ; col<row ; col++){
    //             cout<<" ";
    //         }
    //         for(int col = 0 ; col < n-row; col++){
    //             cout<<"* ";
    //         }
    //         cout<<endl;

    //     }

    //     *
    //    * *
    //   *   *
    //  *     *
    // *       *
    // *       *
    //  *     *
    //   *   *
    //    * *
    //     *

    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n - row - 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < 2*row + 1; col++)
    //     {
    //         if (col == 0)
    //         {
    //             cout << "*";
    //         }
    //         else if (col == 2 * row)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    int n;
    cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << row + 1;
    //         if (col != row)
    //         {
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }
    for (int row = 0; row < n; row++)
    {
        int col;
        for (int col = 0; col < row + 1; col++)
        {
            cout << col + 1;
        }
        col = col - 1;

        for (int col = row; col >= 1; col--)
        {
            cout << col;
        }
        cout << endl;
    }
}
