#include <iostream>
#include <vector>
using namespace std;

int binerySearch(int arr[], int target, int size)
{
    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2;

    while (start <= end)
    {
        int element = arr[mid];

        if (element == target)
        {
            return mid;
        }
        else if (target < element)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start+end)/2;

    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 5, 6, 7};
    int target = 5;
    int size = 8;

    int result = binerySearch(arr, target, size);
    if(result == -1){
        cout<<"Not FOund";
    }
    else{
        cout<<"Got at index: "<<result;
    }
}