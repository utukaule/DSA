#include <iostream>
#include<limits.h>
using namespace std;

int main()
{

    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;
    
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        // swap is predefined function in cpp
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}