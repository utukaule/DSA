#include <iostream>
using namespace std;
// *
// * *
// *  *
// * * *
int main()
{
    int n;
    cout << "Enter the number of stars:- ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                cout << "* ";
            }
            
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}