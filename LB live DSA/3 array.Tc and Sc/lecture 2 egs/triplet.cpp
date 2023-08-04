// find sum by adding 3 numbers

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr{10,20,30,40,50,60};
    int sum = 80;

    for(int i = 0 ; i < arr.size() ; i++){
        int first = arr[i];
        for(int j = i+1 ; j <arr.size() ; j++){
            int second = arr[j];
            for(int k = j+1 ; k< arr.size() ; k++){
                int third = arr[k];
                if((first+second+third) == 80){
                    cout<<first<<"," <<second<< ","<<third <<" are equal to sum 80"<<endl;
                }
            }
        }
    }

}