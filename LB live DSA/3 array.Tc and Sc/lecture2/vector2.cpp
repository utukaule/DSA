#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // create vector
    vector<int> arr;
    int ans = (sizeof(arr) / sizeof(int));
    cout << ans << endl;
    cout << arr.size() << endl;
    cout << arr.capacity() << endl;

    // push
    arr.push_back(12);
    arr.push_back(15);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    };

    arr.pop_back();

        for (int j = 0; j < arr.size(); j++)
    {
        cout << arr[j] << " ";
    };
    cout << endl;

    int n;
    cin>> n;
    vector<int> brr(n,-1);
    cout <<"Capacity of vector is: " <<brr.capacity()<<endl;
    for(int i = 0 ; i < brr.size() ; i++){
        cout<< brr[i]<<" ";
    }

    // normal vector
    cout<<"printing normal vetcor"<<endl;
    vector<int> crr{1,2,3,4,5};
    cout<<"Last element of arr crr: "<< crr[crr.size()-1]<<endl;
    for(int i = 0 ; i < crr.size();i++){
        cout<<crr[i]<<" ";
    };
    cout<<endl;
    vector<int> drr;
    cout<<drr.empty();

}