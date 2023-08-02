#include <iostream>
using namespace std;

int max(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int a, b, c;
    cout << "Enter numbers to find max:";
    cin >> a >> b >> c;
    int result = max(a, b, c);
    cout << "biggest number in a,b,c is : " << result;
    return 0;
}