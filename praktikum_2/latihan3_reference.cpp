/*
 * EXPLORATION ANSWER:
 * If we remove the '&' symbol, C++ uses 'Pass by Value'.
 * The function only receives a "photocopy" of the variables. It swaps the copies inside the function,
 * but the original variables 'x' and 'y' in main() remain untouched and do not swap.
 * (Below is the original working code with '&' to demonstrate the correct Pass by Reference).
 */
#include <iostream>
using namespace std;

// # Menggunakan & (reference) agar bisa memodifikasi variabel asli
void tukarNilai(int &a, int &b) {
    int sementara = a; // # Simpan nilai A
    a = b;             // # Timpa A dengan B
    b = sementara;     // # Isi B dengan nilai A yang lama
}

int main() {
    int x = 100, y = 500;

    cout << "Sebelum ditukar : x = " << x << ", y = " << y << endl;
    tukarNilai(x, y); // # Memanggil fungsi swap
    cout << "Setelah ditukar : x = " << x << ", y = " << y << endl;

    return 0;
}
