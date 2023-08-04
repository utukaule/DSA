#include<iostream>
using namespace std;

bool find(int arr[], int size, int check){
    for(int i = 0 ; i < size ; i++){
        if(arr[i] == check){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int check;
    cin>> check;

    if(find( arr, size, check)){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }

    
    
}