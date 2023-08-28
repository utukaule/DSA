#include <iostream>
using namespace std;

int findSqrt(int n)
{
    int target = n;
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (mid * mid == target)
        {
            return mid;
        }
        if (mid * mid > target)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter numer: " << endl;
    cin >> n;
    int ans = findSqrt(n);
    cout << "this is sqrt :" << ans << endl;

    int precision;
    cout << "enter the num of floating digits: " << endl;

    cin >> precision;
    double step = 0.1;
    double finalans =ans;
    for (int i = 0; i < precision; i++)
    {
        for (double j = finalans; j * j <= n; j = j + step)
        {
            finalans = j;
        }
        step = step/10;
    }
    cout<<"final ans is: "<< finalans<< endl;
}