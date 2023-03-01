//Find number is even or odd 
#include <iostream>
using namespace std;

bool evenOdd(int n){
    return n%2 == 0;
}

int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    if(evenOdd(n)){
        cout<< n <<" is even"<<endl;
    }
    else{
        cout<<n<<" is odd"<<endl;
    }
}