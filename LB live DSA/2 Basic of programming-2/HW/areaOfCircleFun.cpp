#include<iostream>
using namespace std;

float areaOfCircle(float pi, int r){
    float total = pi * (r*r);
    return total;
}

int main(){
    float pi = 3.14;
    int r;
    cout<<"enter the radius of circle: "<< endl;
    cin>>r;
    float result = areaOfCircle(pi, r);
    cout<<"area of circle is : "<<result;
    return 0;
}