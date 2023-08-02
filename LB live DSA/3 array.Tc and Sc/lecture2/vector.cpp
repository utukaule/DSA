#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> arr;
   
    cout << arr.size() << endl;
    cout << arr.capacity() << endl;
    
    arr.push_back(4);
    arr.push_back(10);
    arr.pop_back();

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;

    vector <int> brr(10,1);
    
     brr.push_back(12);
    brr.pop_back();

    for(int i = 0 ; i < brr.size() ; i++){
        cout<<brr[i]<<" ";
    }

    return 0;
}