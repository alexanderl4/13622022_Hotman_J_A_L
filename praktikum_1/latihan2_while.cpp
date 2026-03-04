/*
 * EXPLORATION ANSWER:
 * If int angka = 10; is used, the program finishes immediately.
 * Why? Because the while condition (angka < 0) is checked first.
 * Since 10 is not less than 0, the loop is skipped entirely.
 */
#include <iostream>
using namespace std;

int main() {
    int angka = -1; // # Initialized to negative to enter the loop

    while (angka < 0) {
        cout << "Enter a positive number: ";
        cin >> angka;

        if (angka < 0) {
            cout << "Wrong! Number cannot be negative.\n";
        }
    }

    cout << "Thank you. You entered: " << angka << endl;
    return 0;
}
