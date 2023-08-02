#include <iostream>
using namespace std;

int adding(int num1, int num2)
{
    int result = num1 + num2;
    return result;
}

// Pass by value
// means copy create hogi actual value pass nahi hogi

int main()
{
    int num1;
    int num2;
    cout << "Enter two numbers to add it:" << endl;

    cin >> num1 >> num2;

    int sum = adding(num1, num2);
    cout << "Addition is : "<<sum;
    return 0;
}