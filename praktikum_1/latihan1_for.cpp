/*
 * EXPLORATION ANSWERS:
 * 1. i = 0: The sum doesn't change, but the loop runs one extra time.
 * 2. i += 2 (limit 10): Only adds odd numbers (1,3,5,7,9). Total = 25.
 * 3. Removing '= 0': Total becomes a random garbage value from memory.
 */
#include <iostream>
using namespace std;

int main() {
    int batas_atas;
    int total_jumlah = 0; // # Accumulator must be initialized to 0

    cout << "Enter the upper limit number: ";
    cin >> batas_atas;

    for (int i = 1; i <= batas_atas; i++) {
        total_jumlah += i; // # Adds 'i' to the total sum
    }

    cout << "Total sum from 1 to " << batas_atas << " is: " << total_jumlah << endl;
    return 0;
}
