/*
 * EXPLORATION ANSWER:
 * A void function does not return any data to the caller (no 'return' keyword).
 * Instead of sending the calculation result back to main(), the function handles the printing (cout) internally.
 * In main(), we simply trigger the function without needing a variable to store the result.
 */
#include <iostream>
using namespace std;

// # Menggunakan void, bukan double
void hitungVolumeBalok(double panjang, double lebar, double tinggi) {
    double volume = panjang * lebar * tinggi; 
    cout << "Volume balok: " << volume << endl; // # Mencetak hasil langsung dari dalam fungsi
}

int main() {
    // # Memanggil fungsi secara langsung tanpa menyimpannya ke variabel
    hitungVolumeBalok(10.5, 5.0, 2.0);
    return 0;
}
