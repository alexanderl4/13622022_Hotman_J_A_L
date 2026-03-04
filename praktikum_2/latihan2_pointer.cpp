/*
 * EXPLORATION ANSWER:
 * By adding *ptr_angka = 500;, the value of the original variable 'angka' automatically changes to 500.
 * This proves we are directly manipulating the physical memory address using the pointer,
 * even without touching the variable 'angka' directly.
 */
#include <iostream>
using namespace std;

int main() {
    int angka = 100; // # Variabel biasa
    int *ptr_angka = &angka; // # Pointer menyimpan alamat memori 'angka'

    cout << "Nilai awal variabel angka: " << angka << endl;
    cout << "Alamat memori angka (&angka): " << &angka << endl;

    *ptr_angka = 500; // # Memanipulasi memori secara langsung via pointer (Eksplorasi)

    cout << "Nilai akhir variabel angka setelah diubah via pointer: " << angka << endl;
    
    return 0;
}
