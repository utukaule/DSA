#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>>arr(3, vector<int>(4, 0));
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}