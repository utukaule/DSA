#include <iostream>
using namespace std;



int main()
{
    int n;
    cout<<"Enter nymber: ";
    cin>>n;
    int count = 1;
    while(n!=0){
        int num = n%10;
        // n = 528
        // n%10 remender will be 8
        // then print it 
        cout<<num<<" ";
        // then divide n by 10 answer (520/10) = 52
        // which is 520/10 = 52
        // IIIy, next step will happen till n!=0
        n = n/10;
    }

    // using for loop
    // for(;n!=0;n=n/10){
    //     int num = n%10;
    //     cout<<"num"<<" ";
    // }
    return 0;
}