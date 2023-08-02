
// Write a Function of student & grade problem

#include <iostream>
using namespace std;
// here percentage is parameter

char getGrade(int percentage)
{
    if (percentage >= 90)
    {
        return 'A';
    }
    else if (percentage >= 75)
    {
        return 'B';
    }
    else if (percentage >= 60)
    {
        return 'B';
    }
    else if (percentage >= 60)
    {
        return 'C';
    }
    else if (percentage >= 50)
    {
        return 'E';
    }
    else
    {
        return 'F';
    }
}

int main()
{
    int percentage;
    cin >> percentage;
    // in getGrade percentage is argument
    char grade = getGrade(percentage);
    cout<<grade;
    return 0;
}
