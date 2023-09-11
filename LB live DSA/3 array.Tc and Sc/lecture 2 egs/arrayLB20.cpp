#include<iostream>
using namespace std;
//  array default is pass by referance...(sending address of array)
// array sends base value of address eg.0th elements address of an array
// 
void solve(int arr[],int n){
    arr[0]=100;

}

int main(){
    int arr[]={1,2,3,4};
    int n = 4;

    solve(arr,n); 
    for(int i = 0 ; i< n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}