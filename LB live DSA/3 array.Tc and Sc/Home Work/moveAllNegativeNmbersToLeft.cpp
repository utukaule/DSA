// Move all negative numbers to left

#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector<int> arr = {-1, 1, 4, -6, -7, 9};
    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
        if (arr[start] < 0)
        {
            start++;
        }
        else if (arr[end] > 0)
        {
            end--;
        }
        else{
            swap(arr[end],arr[start]);
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}