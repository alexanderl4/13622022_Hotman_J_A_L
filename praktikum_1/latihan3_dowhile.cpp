/*
 * EXPLORATION ANSWER:
 * Changing do-while to while requires us to provide a "dummy initial value"
 * (e.g., char pilihan = 'Y';). Otherwise, the loop condition might be
 * false immediately, and the code inside won't run even once.
 */
#include <iostream>
using namespace std;

int main() {
    char pilihan = 'Y'; // # Dummy value needed so the while loop starts

    while (pilihan == 'Y' || pilihan == 'y') {
        cout << "\n--- Processing Menu ---" << endl;
        cout << "Running data computation..." << endl;
        cout << "Computation complete!" << endl;

        cout << "Do you want to process data again? (Y/N): ";
        cin >> pilihan;
    }

    cout << "Program stopped." << endl;
    return 0;
}
