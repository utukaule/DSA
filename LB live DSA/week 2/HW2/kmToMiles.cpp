// Convert kms to miles
// 1 mile = 1.6 kms
#include<iostream>
using namespace std;

int main(){
    int km;
    cout<<"Enter the value in KM: "<<endl;
    cin>>km;
    cout<<"value in miles is: "<<(1/1.609)*km<<endl;

    return 0;
}