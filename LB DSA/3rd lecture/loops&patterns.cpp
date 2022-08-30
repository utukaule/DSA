#include <iostream>
using namespace std;

int main()
{

    // conditions and loops OR decision making box

    // progrem 1

    /*int a = 2;
    int b = 3 ;
    if(a<b){
        cout<<"b is greater then a";
    }
    else{
        cout<<"a is greater then b";
    }
    */

    // program 2

    /*
      int a, b;
      cout << "Enter the value of a "<<endl;
      cin >> a ;
      cout << "Enter the value of b"<<endl;
      cin >> b ;
        if (a < b) {
        cout << "b is greater then a";
        }
        else if(a == b){
            cout<<"Both are equal";
        }
      else {
        cout << "a is greater then b";
      }
    */

    // program 3
    //  check number is negative or not

    /*
    int a;
    cout<<"Enter the value of a"<<endl;
    cin>> a;
    if(a > 0 ){
        cout<<"a is +";
    }
    else{
        cout<< " a is -";
    }
    */

    // Problem 4
    //  check the input is capital latter or small latter or number

    /*
    char ch;

    ch = cin.get();

    if(ch >=16 && ch <= 26){
        cout<<"Number";
    }

    else if(ch >= 65 && ch <= 90){
        cout<<"Capital latter";
    }
    else{
        cout<<"Small latter";
    }
    */

    // Topic while loop

    // Problem 5 to till n using while loop
    /*
    int n;
    cin>> n;
    int i = 1;

    while(i <= n){
        cout << i<<endl;
        i= i+1;
    }
    */

    // Problem 6 sum till n using while loop
    /*
    int n;
    int sum = 0;
    cin>>n;
    int i =1;
    while(i <= n){
        sum = sum + i ;
        i++;
    }
    cout<<sum;
    */

    // Problem 7 find sum of even numbers
    /*
    int n;
    cin >> n;
    int sum = 0;
    int i = 1;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        i++;
    }
    cout << sum;
    */

    // Problem 8 given number is prime or not

    /*
    int n;
    cin>>n;
    int i= 2;
    bool t = false;
    while(i < n){
     if(n%i ==0){
         t = true;
     }
     i++;
    }
    if(t == true){
     cout<<"not prime";
    }
    else{
     cout<<"prime";
    }
    */

    // Problem 9 pattern printing
    /*
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    */

    // Problem 10 pattern printing

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j++;
        }
        cout<<endl;
        i++;
    }
}