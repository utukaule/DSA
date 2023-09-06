#include<iostream>
using namespace std;
void myName(string name){
    for(int i = 0 ; i < 5 ; i++){
        cout<<name<<endl;
    }
}
int main(){
    myName("utkarsh");
}