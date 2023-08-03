// Intersection
// I will get all common elements which are common in both arrays
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int sizeA = 5;

    int brr[] = {4, 5, 6, 7};
    int sizeB = 4;

    vector<int> ans;

    for (int i = 0; i < sizeA; i++)
    {  
        for(int j = 0 ; j < sizeB ; j++){
            if(arr[i] == brr[j]){
                // mark
                brr[j] = INT_MiN;
                ans.push_back(arr[i]);
            }
        } 
    }
    for(int k = 0 ; k < ans.size(); k++){
        cout<<ans[k]<<" ";
    }
}
