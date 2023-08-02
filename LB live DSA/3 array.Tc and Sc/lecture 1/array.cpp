#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
void inc(int arr[], int size)
{
    arr[0] = arr[0] + 10;
    printArray(arr, size);
}

int main()
{
    // print array

    // int arr[] = {1,2,3,4,5,5,6};
    // int size = sizeof(arr)/sizeof(int);
    // cout<<size<<endl<<endl;
    // for(int i =0; i< size;i++){
    //     cout<<arr[i]<<endl;
    // }

    // input array

    // int arr[5];
    // cout << "enter the input values: " << endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << "printing the values in array :" << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // Print doubles
    // int arr[5] = {1,2,3,4,5};
    // for(int i = 0 ; i < 5 ; i++){
    //     cout<< 2 * arr[i] << " ";
    // }

    // print double
    //  int n;
    //  int arr[10];
    //  cout<<"Enter no. of elements: "<<endl;
    //  cin>>n;

    // for(int i = 0 ; i < n ; i++){
    //     cin>>arr[i];
    // }
    // cout<<endl<<"Doubles are: ";
    // for(int i = 0 ; i < n ; i++){
    //     cout<<2*arr[i]<< " ";
    // }

    // Make all element 1
    // int arr[5] = {1,2,3,4,5};

    // for(int i = 0 ; i <5 ; i++){
    //     arr[i] = 1;
    // }

    // for(int i =0 ; i < 5 ; i++){
    //     cout<<arr[i]<<" ";
    // }

    int arr[] = {1, 2};
    int size = 2;
    inc(arr, size);
    printArray(arr, size);
}
// arr[0] => base address + index * data type size