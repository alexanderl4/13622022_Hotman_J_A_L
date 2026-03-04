#include <iostream>
using namespace std;

// # Fungsi void dengan parameter pointer
void kuadratkan(int *val) {
    *val = (*val) * (*val); // # Mengubah nilai di alamat memori secara langsung
}

int main() {
    int angka = 5; 

    cout << "Nilai awal : " << angka << endl;
    
    // # Memanggil fungsi dengan mengirimkan alamat memori (&)
    kuadratkan(&angka); 
    
    cout << "Nilai akhir: " << angka << endl; // # Nilai otomatis berubah jadi 25

    return 0;
}
