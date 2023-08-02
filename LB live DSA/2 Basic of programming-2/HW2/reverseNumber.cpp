#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number to reverse: ";
    cin>>n;
    to_string(n);
    char add;
    for(char i = n ; n>=1 ;i--){
        add = add + i;
    }
    cout<<add;
    return 0;
}