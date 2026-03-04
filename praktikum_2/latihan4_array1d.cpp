/*
 * EXPLORATION ANSWER:
 * If the size is changed to 6, the 6th element will print a random Garbage Value.
 * If the loop condition is changed to i <= ukuran, it causes an Out of Bounds error,
 * accessing memory outside the array, which can lead to a Segmentation Fault.
 */
#include <iostream>
using namespace std;

int main() {
    const int ukuran = 5; // # Ukuran array statis

    int vektorA[ukuran] = {1, 2, 3, 4, 5};
    int vektorB[ukuran] = {10, 20, 30, 40, 50};
    int hasil[ukuran]; // # Array untuk menyimpan hasil penjumlahan

    for(int i = 0; i < ukuran; i++) {
        hasil[i] = vektorA[i] + vektorB[i]; // # Menjumlahkan elemen yang sejajar
        cout << "Elemen indeks ke-" << i << ": " << hasil[i] << endl;
    }

    return 0;
}
