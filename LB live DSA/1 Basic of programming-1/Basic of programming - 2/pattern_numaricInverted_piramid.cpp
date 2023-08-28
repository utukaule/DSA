#include<iostream>
using namespace std;

int main(){
    for(int row = 1;row<=5 ; row++){
        for(int col = 5-row ; col >=0 ; col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}