/*
 * EXPLORATION ANSWER:
 * Changing the loop order (column 'j' outside, row 'i' inside) simulates Column-Major Order.
 * The matrix is read vertically from top to bottom. In C++, this is much slower because
 * the memory access jumps across different blocks instead of reading sequentially.
 */
#include <iostream>
using namespace std;

int main() {
    int matriks[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int pengali = 2;

    cout << "Membaca matriks terbalik (Column-Major):" << endl;
    
    // # Eksplorasi: Loop Kolom di luar, Baris di dalam
    for(int j = 0; j < 3; j++) {
        for(int i = 0; i < 2; i++) {
            int hasil = matriks[i][j] * pengali; 
            cout << hasil << "\t"; // # Cetak dengan jarak tab
        }
        cout << endl; // # Pindah baris setelah 1 kolom selesai dibaca ke bawah
    }

    return 0;
}
