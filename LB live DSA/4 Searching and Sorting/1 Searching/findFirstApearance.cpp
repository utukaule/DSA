// Find first apperence of target in array/vector
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int findFirst(vector<int> arr, int size, int target)
{
    int s = 0;
    int e = size;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        int element = arr[mid];
        if (element == target)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (target < element)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> arr{1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 5, 6};
    int size = arr.size() - 1;
    int target = 3;
    int result = findFirst(arr, size, target);
    cout << result << endl;

    auto ans2 = lower_bound(arr.begin(), arr.end(), target);
    cout <<"ans2 is :" <<ans2 - arr.begin();

}