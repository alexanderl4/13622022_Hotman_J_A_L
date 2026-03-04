#include <iostream>
using namespace std;

// # Fungsi menghitung rata-rata (Parameter: Array 1D dan ukuran array)
double hitungRataRata(double arr[], int ukuran) {
    double total = 0.0; 
    for (int i = 0; i < ukuran; i++) {
        total += arr[i]; // # Menjumlahkan semua elemen array
    }
    return total / ukuran; // # Mengembalikan hasil rata-rata
}

int main() {
    // # Membuat array 5 angka sembarang
    double data[5] = {10.5, 20.0, 15.5, 30.0, 24.0};

    // # Memanggil fungsi dan mencetak hasilnya
    double hasil = hitungRataRata(data, 5);
    cout << "Rata-rata array adalah: " << hasil << endl;

    return 0;
}
