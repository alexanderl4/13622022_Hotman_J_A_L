/*
 * EXPLORATION ANSWERS:
 * 1. Vector Elasticity Test: By adding 5 random coordinates manually, the while-loop
 * dynamically reads them and the vector auto-resizes without any array bounds error.
 * 2. Modifying Computation: Changed the distance formula to calculate from a new 
 * reference point (5.0, 5.0).
 */
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>  
#include <string> 
using namespace std;

class Partikel {  
private:  
    double x, y;  
    double jarak_pusat;

public:
    Partikel(double pos_x, double pos_y) {  
        x = pos_x;
        y = pos_y;
        jarak_pusat = 0.0;
    }

    void hitungJarak() {
        // # Eksplorasi 2: Menghitung jarak terhadap titik (5.0, 5.0)
        jarak_pusat = sqrt((x - 5.0)*(x - 5.0) + (y - 5.0)*(y - 5.0));
    }  

    // # Fungsi getter tambahan agar data private bisa dicetak di main()
    double getX() { return x; }
    double getY() { return y; }
    double getJarak() { return jarak_pusat; }
};

int main() {  
    vector<Partikel> kumpulan_partikel;  
    ifstream fileBaca("koordinat_mentah.txt");  
      
    string header1, header2; 
    double temp_x, temp_y;

    if (fileBaca.is_open()) {
        fileBaca >> header1 >> header2;
        while (fileBaca >> temp_x >> temp_y) {   
            kumpulan_partikel.push_back(Partikel(temp_x, temp_y));
        }  
        fileBaca.close();  
    } else {  
        cout << "Gagal! Pastikan file koordinat_mentah.txt sudah Anda buat." << endl;  
        return 1; 
    }

    for (int i = 0; i < kumpulan_partikel.size(); i++) {  
        kumpulan_partikel[i].hitungJarak();  
    }

    ofstream fileHasil("hasil_jarak.txt");  
    if (fileHasil.is_open()) {  
        for (int i = 0; i < kumpulan_partikel.size(); i++) {  
            fileHasil << "Partikel " << i + 1  
                      << " | Posisi: (" << kumpulan_partikel[i].getX() << ", " << kumpulan_partikel[i].getY() << ") "  
                      << "| Jarak: " << kumpulan_partikel[i].getJarak() << "\n";  
        }  
        fileHasil.close();  
        cout << "=> Selesai! Buka file 'hasil_jarak.txt' untuk melihat kalkulasinya." << endl;  
    }

    return 0;  
}
