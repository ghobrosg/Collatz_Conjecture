// the_Collatz_problem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome to the Collatz conjecture calculator. In the Collatz conjecture, you take a number and if it is even, divide it by 2, if it is odd multiply it by three and add one." << endl;
    cout << "When this is done for any number repeatedly, the final product will always be 1. Enter any number to try the Collatz conjecture yourself!" << endl << endl;
    int x;
    cin >> x;
    for (int i = 1; i > 0; i++) {
        if (x % 2 == 0) {
            x = x / 2;
        }
        else {
            x = 3 * x + 1;
        };
        cout << "Result #" << i << ": " << flush;
        if (x % 2 == 0) {
            cout << x << " (Even)" << endl;
        }
        else if (x == 1) {
            cout << x << endl;
        }
        else {
            cout << x << " (Odd)" << endl;
        }
        if (x == 1) {
            break;
        }
    };
    system("pause");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
