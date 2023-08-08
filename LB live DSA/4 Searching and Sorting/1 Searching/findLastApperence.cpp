// Find last apperence of target in array/vector

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int findLast(vector<int>arr,int size, int target){

    int start = 0;
    int end = size;
    int mid = start+ (end - start)/2;
    int ans = -1;

    while(start<= end){
        int element = arr[mid];
        if(element == target){
            ans = mid;
            start = mid+1;
        }
        else if(target < element){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end- start)/2;
    }
    return ans;

}


int main(){


    vector<int>arr{1,2,3,4,4,4,4,4,4,4,4,4,5,6,6};
    int size = arr.size()-1;
    int target = 4;
    int result = findLast(arr,size,target);
    cout<<result<<endl;

    auto ans2 = upper_bound(arr.begin(), arr.end(),target);
    cout<< "ans2 is : "<< ans2 -  arr.begin() -1; 

}