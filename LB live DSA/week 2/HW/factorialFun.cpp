// Find factorial of number

#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact =1;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n;
    cout << "Enter number to get factorial: " << endl;
    cin >> n;
    int result = factorial(n);
    cout << "factorial of n is: " << result;
    return 0;
}