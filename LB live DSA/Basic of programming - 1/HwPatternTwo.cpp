#include <iostream>
using namespace std;
//****
//****
//****
//****

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) //This external loop is for row
    {
        for (int j = 0; j < n; j++) //This internal loop is for column
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}