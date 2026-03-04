/*
 * EXPLORATION ANSWER:
 * If 'int angka = 10;' is used, the program finishes immediately.
 * Why? The while condition (angka < 0) is evaluated first. Since 10 < 0 is False, the loop is completely skipped.
 */
#include <iostream>
using namespace std;

int main() {  
    int angka = -1; // # Diinisialisasi negatif agar bisa masuk ke dalam loop

    while (angka < 0) {  
        cout << "Masukkan angka positif: ";  
        cin >> angka;

        if (angka < 0) {  
            cout << "Salah! Angka tidak boleh negatif.\n";  
        }  
    }

    cout << "Terima kasih. Anda memasukkan angka: " << angka << endl;  
    return 0;  
}
