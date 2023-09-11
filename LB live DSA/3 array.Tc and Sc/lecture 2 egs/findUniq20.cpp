#include<iostream>
using namespace std;
//  array default is pass by referance...(sending address of array)
// array sends base value of address eg.0th elements address of an array
// 


int getUnique(int arr[],int n ){
    int ans = 0;
    for(int i = 0 ; i< n ; i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[] = {1,1,2,2,3,3,4,4,5,5,6};
    int n = 11;
    int finalAns = getUnique(arr,n);
    cout<<finalAns;
}