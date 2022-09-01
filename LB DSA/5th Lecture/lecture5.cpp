#include <iostream>
using namespace std;

int main()
{
    // problem 1
    /*
       int a, b = 1;
       a=10;
       cout<<a<<endl;
       if(++a){
          cout<<b;
       }
       else{
          cout<<++b;
       }
  */


    // Problem 2
    /*
    int a= 1;
    int b = 2;
    if(a-- >0 && ++ b > 2){
        cout<<"No";
    }
    else{
        cout<<"Yes";
    }
    */


    // Problem 3 
    // Fibonacci
    /*
   int n;
   cin >> n;
   int a = 0;
   int b = 1;
   cout<<a << " " << b;

    for(int i = 0; i <=n ;i++){
        int nextNumber = a+b;
        cout<<nextNumber << " ";
        a= b;
        b = nextNumber;
    }
    */


    // Problem 3 
    // Prime
    /*
    int n;
    cin >> n;
    bool b = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            b = false;
            break;
        }
    }
    if (b == true)
    {
        cout << "prime";
    }
    else
    {
        cout << "Not prime number";
    }
    */
   
   
   //Understanding of continue
   /*
   for(int i = 0;i <=10; i++){
    cout<<"hi"<<endl;
    continue;
    cout<<"aaja";
   }
   */

   //Questions todo twisted questions 
   //Problem 4
   /*
    for(int i = 0; i<=5; i++){
        cout<<i<<" ";
        i++;
    }
    */

   //Problem 5
   /*
   for(int i = 1 ; i <= 15; i+=2){
    cout << i << " ";
    if(i&1){
        continue;
    }
    i++;
   }
     */

    

}