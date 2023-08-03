// Question (asked in microsoft, flipKart, amazon)
// find unique element

#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> arr){
    int ans = 0;
    for(int i = 0 ; i < arr.size() ; i++){
        ans = ans ^ arr[i];
        // eg 0^1^1^2^3^3 => 2
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements: "<<endl;
    // taking input
    for(int i = 0 ; i < arr.size(); i++){
        cin>>arr[i];
    }

    int uniqueElement = findUnique(arr);
    cout<<"Unique element in array is :" << uniqueElement<<endl;
}