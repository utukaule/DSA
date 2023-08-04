#include <iostream>
#include<limits.h>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4,45, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(int);
    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else
        {
            continue;
        }
    }
    cout <<"Max number in array is : "<< max << endl;
    return 0;
}