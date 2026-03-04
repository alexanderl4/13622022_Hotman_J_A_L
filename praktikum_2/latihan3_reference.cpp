/*
 * EXPLORATION ANSWER:
 * If we remove the '&' symbol, C++ uses 'Pass by Value'.
 * The function only receives a "photocopy" of the variables. It swaps the copies inside its scope,
 * but the original variables 'x' and 'y' in main() remain untouched and do not swap.
 */
#include <iostream>
using namespace std;

// # Menggunakan & (reference) agar bisa memodifikasi variabel asli di memori
void tukarNilai(int &a, int &b) {
    int sementara = a; 
    a = b;             
    b = sementara;     
}

int main() {
    int x = 100, y = 500;

    cout << "Sebelum ditukar : x = " << x << ", y = " << y << endl;
    tukarNilai(x, y); // # Memanggil fungsi swap
    cout << "Setelah ditukar : x = " << x << ", y = " << y << endl;

    return 0;
}
