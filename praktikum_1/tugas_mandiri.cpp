#include <iostream> 
using namespace std; 

int main() { 
    int number; 
    int total_positive = 0; 

    // # 1. Meminta tepat 5 angka
    for (int i = 1; i <= 5; i++) { 
        cout << "Masukkan angka ke-" << i << ": "; 
        cin >> number; 

        // # 2. Cek positif, negatif, atau nol
        if (number > 0) { 
            cout << "-> Status: Positif\n"; 
            // # 3. Hitung total angka positif
            total_positive++; 
        } 
        else if (number < 0) { 
            cout << "-> Status: Negatif\n"; 
        } 
        else { 
            cout << "-> Status: Nol\n"; 
        } 
    } 

    // # 4. Cetak hasil akhir
    cout << "\nTotal angka positif: " << total_positive << endl; 

    return 0; 
}
