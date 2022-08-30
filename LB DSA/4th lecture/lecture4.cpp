#include <iostream>
using namespace std;

int main()
{
    // Problem 1 pattern printing
    /*
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    */

    // Problem 2 pattern printing
    /*
     int n;
     cin >> n;
     int i = 1;
     while (i <= n)
     {
         int j = 1;
         while (j <= n)
         {
             cout << n-j+1;
             j++;
         }
         cout << endl;
         i++;
     }
     */

    // Problem 3 pattern printing
    /*
    int n;
    cin>> n;
    int i =1;
    int count=1;
    while(i<=n){
     int j=1;
     while(j<=n){
         cout<< count;
         count++;
         j++;
     }
     cout<<endl;
     i++;
    }
    */

    // Problem 4
    /*
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
    */

    // Problem 5
    //  1
    //  22
    //  333
    //  4444

    /*
    int n;
    cin>>n;
    int i = 1;
    while(i <= n){
     int j = 1;
     while(j<=i){
         cout<<i<<" ";
         j++;
     }
     cout<<endl;
     i++;
    }
    */

    // Problem 6
    // 1
    // 2 3
    // 4 5 6

    /*
    int n;
    cin >> n;
    int i = 1;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    */

    // Problem 7
    //  1
    //  2 3
    //  3 4 5
    //  4 5 6 7

    /*
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int value = i;
        while (j <= i)
        {
            cout << value << " ";
            value++;
            j++;
        }
        cout << endl;
        i++;
    }
    */

    // Problem 8
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1

    /*
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << (i - j + 1) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    */
    // Problem 9
    // A A A
    // B B B
    // C C C

    /*
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            char ch = 'A' + row - 1;
            cout << ch<<" ";
            col++;
        }
        cout << endl;
        row++;
    }
    */

    // Problem 11
    //  ABC
    //  ABC
    //  ABC

    /*
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col= 1;
        while(col<=n){
            char ch = 'A' + col - 1;
            cout<<ch;
            col++;
        }
        cout<<endl;
        row++;

    }
    */

    // Problem 12
    // A B C
    // D E F
    // G H I

    // Example to understand
    /*
    int q = 'B' ;
    cout << q;
    char b = q;
    cout << endl;
    cout << b;
    cout<<endl;
*/
    /*
        int n;
        cin >> n;
        int row = 1;
        char start = 'A';
        while (row <= n)
        {
            int col = 1;
            while (col <= n)
            {
                char ch = start;
                cout << ch << " ";
                start++;
                col++;
            }
            cout << endl;
            row++;
        }
    */

    // Problem 13
    //  A B C
    //  B C D
    //  C D E

    /*
    int n;
    cin >> n;
    int row = 1;
    char start = 'A';
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            char ch = start + row + col - 2;
            cout << ch;
            col++;
        }
        cout << endl;
        row++;
    }
    */

    // Problem 14
    //  A
    //  BB
    //  CCC

    /*
   int n;
   cin>>n;
   int row=1;
   while(row<=n){
    int col=1;
    while(col<=row){
        char ch = 'A'+row-1;
        cout<<ch;
        col++;
    }
    cout<<endl;
    row++;
   }
*/
    // Problem 15
    //  A
    //  BC
    //  DEF

    /*
    int n;
    cin>>n;
    int row= 1;
    char start = 'A';
    while(row <= n){
       int col = 1;
       while(col <= row){
        char ch = start;
        cout<<ch;
        start++;
        col++;
       }
       cout<< endl;
       row++;
    }
*/

    // Problem 16
    // A
    // BC
    // CDE

    /*
    int n;
    cin >> n;
    char start = 'A';
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            char ch = start + row + col - 2;
            cout << ch;
            col++;
        }
        cout << endl;
        row++;
    }
    */

    // Problem 17
    // C
    // BC
    // ABC

    /*
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        char start = 'A' + n - row;
        while(col<= row){
            cout<<start;
            start++;
            col++;
        }
        cout<<endl;
        row++;

    }
    */

    // Problem 18
    //  A
    //  B C D
    //  C D E

    /*
    int n;
    cin>> n;
    int row = 1;
    while(row<= n){
        int col= 1;
        char start = 'A'+row-1;
        while(col <= row){
            cout<<start;
            start++;
            col++;
        }
        cout<<endl;
        row++;

    }
    */

    // Problem 19
    //      *
    //     **
    //    ***
    //   ****
    //  *****

    /*
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int space = n - row;
        // first we will print spaces
        while (space)
        {
            cout << "_";
            space--;
        }
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
    */

    // Problem 20
    // * * * *
    // * * *
    // * *
    // *

    /*
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        int start = n - row + 1;
        while (col <= start)
        {
            cout << "* ";
            col++;
        }
        cout << endl;
        row++;
    }
    */

    // Problem 21
    // *****
    // _****
    // __***
    // ___**
    // ____*

    /*
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int space = row - 1;
        while (space)
        {
            cout << "_";
            space--;
        }

        int col = 1;
        int start = n - row + 1;
        while (col <= start)
        {
            cout << "*";
            start--;
        }
        cout << endl;
        row++;
    }
    */

    // problem 22
    // 1111
    // _222
    // __33
    // ___4

    /*
    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {

        int space = row - 1;

        while (space >= 1)
        {
            cout << "_";
            space--;
        }


        int col = 1;
        int start = n - row + 1;

        while (col <= start)
        {
            cout << row;
            col++;
        }

        cout << endl;
        row++;
    }
    */

    // Problem 23
    //    1
    //   121
    //  12321
    // 1234321

    /*
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {

        // find spaces (first triangle)
        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }

        // find second triangle
        int col = 1;
        while (col <= row)
        {
            cout << col;
            col++;
        }

        int start = row - 1;
        while(start){
            cout<<start;
            start--;
        }
    cout << endl;
    row++;
    }
    */


   
}