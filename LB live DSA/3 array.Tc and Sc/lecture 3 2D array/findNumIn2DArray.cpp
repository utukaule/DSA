// Find targeted number in 2d array

#include<iostream>
using namespace std;

bool findNumber(int arr[][3], int row, int col, int target)
{
    for (int i = 0; i < row ; i ++){
        for(int j = 0 ; j < col ; j++){
            if(arr[i][j]== target){
                return true;
            }
        }
    }
    return false;
}

int main()
{

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {6, 7, 8}};
    int row = 3;
    int col = 3;
    int target = 4;

    int result = findNumber(arr,row,col,target);
   
    if(result == 1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}