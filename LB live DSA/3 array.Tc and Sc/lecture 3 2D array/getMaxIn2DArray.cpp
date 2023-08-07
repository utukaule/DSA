#include <iostream>
using namespace std;

int findMaxAndMin(int arr[][3], int row, int col, int max, int min)
{

    for (int i = 0; i < row; i++)
    {
        // finding max here
        for (int j = 0; j < col; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }

        // finding min here
        for (int j = 0; j < col; j++)
        {
            if (min > arr[i][j])
            {
                min = arr[i][j];
            }
        }
    }
    cout << "Minimum value in array is: " << min << endl;
    cout << "Maximum value in array is: " << max << endl;
}

int main()
{

    int arr[3][3] = {{11, 2, 3}, {4, 5, 612}, {6, 7, 8}};
    int row = 3;
    int col = 3;
    // find max and min
    int max = INT_MIN;
    int min = INT_MAX;

    int result = findMaxAndMin(arr, row, col, max, min);
}