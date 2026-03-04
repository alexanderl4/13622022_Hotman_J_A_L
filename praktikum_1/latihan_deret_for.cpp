/*
 * EXPLORATION ANSWERS:
 * 1. i = 0: The final sum doesn't change (+0), but the loop runs one extra time.
 * 2. i += 2 (limit 10): Only adds the odd numbers (1,3,5,7,9). The total is 25.
 * 3. Removing '= 0': The accumulator starts with a random garbage value from memory, ruining the calculation.
 */
#include <iostream>
using namespace std;

int main() {  
    int batas_atas;  
    int total_jumlah = 0; // # Akumulator wajib diinisialisasi

    cout << "Masukkan batas atas angka: ";  
    cin >> batas_atas;

    for (int i = 1; i <= batas_atas; i++) {  
        total_jumlah += i; // # Menambahkan i ke total 
    }

    cout << "Total penjumlahan dari 1 hingga " << batas_atas << " adalah: " << total_jumlah << endl;

    return 0;  
}
