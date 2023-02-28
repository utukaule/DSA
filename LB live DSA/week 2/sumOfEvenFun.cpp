// sum of all even numbers from 0 to n

#include <iostream>
using namespace std;

int addEven(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
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
    cout << total<< endl;
    return 0;
}