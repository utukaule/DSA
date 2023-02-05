#include<iostream>
using namespace std;

//break && continue...
int raja = 410; //global variable can be accesed anywhere in file.

int main(){
    
    //breake

    // for(int i = 0 ; i < 5; i++){
    //     cout<<"hi this is me break";
    //     break;
    // }

    // for(int i = 0 ; i <5 ;i++){
    //     continue;
    //     cout<<"hi this is continue";
    // }


    //variable scoping

    //declear
    int a;
    //initialisation
    int b = 1;
    //updating
    b = 2;
    cout<<b;
    //in the above example a and b is local to main function
    
    cout<<endl;
    cout<<raja;
    cout<<endl;

    if(true){
        int b = 10;
        cout<<b;
        cout<<endl;
        cout<<raja;
    }


}