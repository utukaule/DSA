#include <iostream>
using namespace std;

int prime(int n)
{
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    return count;
}

int main()
{
    int n;
    cout << "Check it is prime or not: ";
    cin >> n;

    int result = prime(n);

    if (result >= 1)
    {
        cout << "Number is not prime";
    }
    else
    {
        cout << "Number is prime";
    }
    return 0;
}