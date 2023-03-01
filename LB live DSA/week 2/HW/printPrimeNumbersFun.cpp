#include <iostream>
using namespace std;

int allPrimeNum(int n)
{

    for (int i = 2; i < n; i++)
    {
        int count = 0;

        for (int j = 2; j <= i; j++)
        {

            if (i % j == 0)
            {
                count++;
            }
            else
            {
                continue;
            }
        }
        if (count >= 1)
        {
            continue;
        }
        else
        {
            return i;
        }
    }
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int result = allPrimeNum(n);
    cout << result;
}