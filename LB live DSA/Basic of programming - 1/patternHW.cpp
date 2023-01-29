
#include <iostream>
using namespace std;

// * * * * *
// *       *
// * * * * *

// int main()
// {
//     // rowcount
//     // colcount
//     // outer loop row
//     // Inner loop col
//     for (int row = 0; row < 3; row++)
//     {
//         if (row == 0 || row == 2)
//         {
//             for (int i = 0; i < 5; i++)
//             {
//                 cout << "* ";
//             }
//         }
//         else
//         {
//             cout << "*";
//             for (int i = 0; i < 7; i++)
//             {
//                 cout << " ";
//             }
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

//Make above code generic below

// * * * * *
// *       *
// * * * * *
// make this some using user input.
// rowcount
// colcount

// *
// **
// ***
// ****
int main(){
    int n ;
    cin>> n;
    for(int i = 0; i < n ; i++){
        for(int j = 0 ; j<=i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}






