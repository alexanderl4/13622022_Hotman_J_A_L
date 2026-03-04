/*
 * EXPLORATION ANSWER:
 * By replacing the manual push_back lines with a 'for' loop, the program can dynamically
 * generate 100 calculation tasks on the fly without hardcoding each one manually.
 */
#include <iostream>
#include <vector>
using namespace std;

class TugasKalkulasi {  
private:  
    int id_tugas;  
    double nilai_A, nilai_B, hasil;

public:  
    TugasKalkulasi(int id, double a, double b) {  
        id_tugas = id;  
        nilai_A = a;  
        nilai_B = b;  
        hasil = 0.0;  
    }

    void kerjakan() {  
        hasil = nilai_A + nilai_B;
    }

    void tampilkanHasil() {  
        cout << "Tugas " << id_tugas << " | " << nilai_A << " + " << nilai_B << " = " << hasil << endl;  
    }  
};

int main() {  
    vector<TugasKalkulasi> antrean;

    // # Eksplorasi: Membangkitkan 100 tugas secara dinamis
    for(int i = 1; i <= 100; i++) {
        antrean.push_back(TugasKalkulasi(i, i * 2.5, i * 1.5));
    }

    // # Proses massal  
    for(int i = 0; i < antrean.size(); i++) {  
        antrean[i].kerjakan();  
        antrean[i].tampilkanHasil();  
    }

    return 0;  
}
