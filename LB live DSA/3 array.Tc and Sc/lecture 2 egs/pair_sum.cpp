// Find a pair upon addtion gives value equal to sum
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr{10,20,30,40,50,60};
    int sum = 80;
    for(int i = 0 ; i < arr.size() ; i++){
        int ele = arr[i];
        for(int j = i+1 ; j < arr.size(); j++){
            // cout<<"(" <<ele <<"," <<arr[j] <<")"<<endl;
            if((ele + arr[j]) ==sum ){
                cout<<"This pairs have sum 8: " <<ele<<"," <<arr[j]<<endl;
            }
        }

    }

}