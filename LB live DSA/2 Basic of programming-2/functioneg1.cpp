#include <iostream>
using namespace std;

int bigger(int a,int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

// pass by value concept
// means copy create hogi actual value pass nahi hogi
int main()
{
    int a = 7;
    int b = 6;
    cout << bigger(a, b);
    // function calling and invoking is same
    return 0;
}