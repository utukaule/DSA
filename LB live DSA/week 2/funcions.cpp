#include <iostream>
using namespace std;

void printName()
{
    int n;
    cout << "Enter the number n" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "babbar" << endl;
    }
}
int main()
{
    //calling function
    printName();
}