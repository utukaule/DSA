// find out total notes are required for amount. nots-> (100rs,20,1)

#include <iostream>
using namespace std;

int main()
{
    int amt = 1330;
    int notes = 0;
    
    switch (amt)
    {
    case 1:
    if(amt>100){
            notes = notes + (amt/100);
            amt = amt%100;
    }
        break;
    
    case 2:
            if(amt>20){
            notes = notes + (amt/20);
            amt = amt%20;
    }
        break;
    
    case 3:
            if(amt<20){
            notes = notes + (amt/1);
            amt = amt%1;
    }
        break;

    default:
        cout << "this is not going to work"<<endl;
    }
    cout<<notes<<endl;
}