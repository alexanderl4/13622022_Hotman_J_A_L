/*
 * EXPLORATION ANSWER:
 * Changing a 'do-while' to a standard 'while' loop creates a logical difficulty: 
 * We MUST provide a "dummy/fake initial value" to the variable (e.g., char pilihan = 'Y';).
 * If we don't, the condition might be false immediately, and the menu won't show even once.
 */
#include <iostream>
using namespace std;

int main() {  
    char pilihan = 'Y'; // # Nilai pancingan agar loop while bisa berjalan pertama kali

    while (pilihan == 'Y' || pilihan == 'y') {  
        cout << "\n--- Menu Pemrosesan ---" << endl;  
        cout << "Menjalankan komputasi data..." << endl;  
        cout << "Komputasi selesai!" << endl;

        cout << "Apakah Anda ingin memproses data lagi? (Y/T): ";  
        cin >> pilihan;  
    }

    cout << "Program dihentikan." << endl;  
    return 0;  
}
