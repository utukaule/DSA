// findout number of 1 in set bites
#include <iostream>
using namespace std;

int main()
{
    int n = 1;
    int count = 0;
    // initially set bit is 0
    while (n != 0)
    {
        // Found one setbit
        // so increment setbit count
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
        // shifting to right
    }
    cout << "number of set bits are: " << count;
}