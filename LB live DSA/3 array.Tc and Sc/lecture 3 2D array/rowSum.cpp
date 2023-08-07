// row sum in 2d array
#include<iostream>
using namespace std;


int main(){
    int arr[3][3]={{1,2,3},{2,3,5},{7,9,6}};
    int row= 3;
    int col=3;

    for(int i = 0 ; i < row ; i++){
        int sum = 0;
        for(int j= 0 ; j < col ; j++){
            sum = sum + arr[i][j];
        }
        cout<<sum<<" ";

    }
}