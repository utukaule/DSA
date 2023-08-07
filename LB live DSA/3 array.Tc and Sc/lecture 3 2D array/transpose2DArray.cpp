#include<iostream>
using namespace std;

int main(){
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {6, 7, 8}};
    int row = 3;
    int col = 3;
    
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }


}