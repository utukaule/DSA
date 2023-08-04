#include<iostream>
using namespace std;


int count(int arr[], int size, int ones, int zeros){
    for(int i = 0 ; i < size; i++){
        if(arr[i] ==1 ){
            ones++;
        }
        else if(arr[i] == 0){
            zeros++;
        }
    }
    cout<<"1 are:"<< ones <<" " <<"0 are: "<< zeros;
}

int main(){
    int arr[] = {0,0,0,0,0,1,1,1,0,1};
    int size = sizeof(arr)/sizeof(int);
    
    int ones = 0;
    int zeros = 0;
    count(arr, size, ones,zeros);

}