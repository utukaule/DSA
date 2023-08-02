// sum of all even numbers from 0 to n

#include <iostream>
using namespace std;

int addEven(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    // OR
    // for(int i = 2; i<=n ; i=i+2)
    {
        if (i % 2 == 0)
        //  Avoid modulus operator because it takes lot of processing power (%)
        {
            sum = sum + i;
        }
        else
        {
            continue;
        }
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter the range: ";
    cin >> n;
    int total = addEven(n);
    cout << total << endl;
    return 0;
}