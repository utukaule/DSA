#include<iostream>
using namespace std;
// *
// **
// ***
// ****
int main(){
    int n;
    cout<<"Enter the number of stars you want:- ";
    cin>>n;
    cout<<endl;

    for(int i = 0; i < n ;i++){

        for(int j = 05 ; j<=i ; j++){
            cout<<"* ";
        }   
        cout<<endl;
    }

}