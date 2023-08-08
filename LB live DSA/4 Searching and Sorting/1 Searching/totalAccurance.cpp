// Find how many times the target element (4) is accuring in array.
#include <iostream>
#include <vector>
using namespace std;

int findFirst(vector<int> arr, int target, int size)
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
        mid =  s+ (e- s)/2;
    }
    return ans;
}

int findLast(vector<int> arr, int target, int size)
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
            s = mid + 1;
        }
        else if (target < element)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid =  s+ (e- s)/2;
    }
    return ans;
}

int main()
{

    vector<int> arr{1, 2, 3, 3, 4, 4, 4, 4, 4, 5, 6};
    int target = 4;
    int size = arr.size() - 1;
    int first = findFirst(arr, target, size);
    int last = findLast(arr, target, size);

    int result = last - first +1 ;
    cout <<"The number of accurance of "<<target <<" in array is "<<result;
}