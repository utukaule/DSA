#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int array[12] = {1, 2, 4};

    // cout << endl << array[1]<<endl<< endl;

    int n = 15;

    printArray(array, n);

    cout << endl;

    int array2[12] = {1, 2, 4};

    printArray(array2, n);

    int car[5] = {1, 2, 3, 4, 5};
    cout << endl
         << sizeof(car) / sizeof(int) << endl;
}