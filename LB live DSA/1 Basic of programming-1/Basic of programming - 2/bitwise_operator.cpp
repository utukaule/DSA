#include<iostream>
using namespace std;

//bitwise operator
//AND, OR, NOT, XOR

int main(){
    // int a = -25;
    // // a = a << -3; //- creates garbadge value.
    // a = a >> 1;
    // cout << a;


    // pre/Post -> increment and decrement operator.
    //a++, ++a, A--,--A
    
    // ++a pehelehi a ko increment karo then use karo
    int a = 5;
    ++a;
    cout<<a;

    cout<<endl;
    //a++ pehele use karo then increment karo.
    int b = 1;
    cout<< b++; //print 1 hoga badme increment hoga. 
    cout<<endl; 
    cout<< b;    //increment ho gaya ab print 2 hoga.
    cout<<endl;
    int c = 6;
    c = ++c +1;
    cout<<c;
    int z = 5;
    cout<<endl;
    cout<<(++z)*(++z);
}