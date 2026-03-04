/*
 * EXPLORATION ANSWER:
 * Created a new object 'mobil3' inside main(), filled its attributes (Porsche, Silver, 2024),
 * and successfully called the nyalakanMesin() method for this independent object.
 */
#include <iostream>
#include <string>
using namespace std;

// # Mendefinisikan Class (Cetak Biru)
class Mobil {  
public: 
    string merk;  
    string warna;  
    int tahun;

    // # Perilaku (Method)  
    void nyalakanMesin() {  
        cout << "Mesin mobil " << merk << " (" << warna << ") menyala!" << endl;  
    }  
};

int main() {  
    // # Membuat Object 1
    Mobil mobil1;  
    mobil1.merk = "Toyota";  
    mobil1.warna = "Merah";  
    mobil1.tahun = 2022;

    // # Membuat Object 2
    Mobil mobil2;  
    mobil2.merk = "Honda";  
    mobil2.warna = "Hitam";  
    mobil2.tahun = 2020;

    // # Membuat Object 3 (Tugas Eksplorasi)
    Mobil mobil3;
    mobil3.merk = "Porsche";
    mobil3.warna = "Silver";
    mobil3.tahun = 2024;

    // # Memanggil perilaku dari masing-masing object
    mobil1.nyalakanMesin();  
    mobil2.nyalakanMesin();
    mobil3.nyalakanMesin(); // # Panggilan untuk objek ke-3

    return 0;  
}
