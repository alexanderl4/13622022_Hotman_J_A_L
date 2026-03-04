/*
 * EXPLORATION ANSWERS:
 * 1. Adding 'p1.posisi_x = 100.0;' is rejected by the compiler because 'posisi_x' is 'private' and locked.
 * 2. Changing 'private' to 'public' makes the program run successfully, but this exposes a vulnerability 
 * where external functions can arbitrarily ruin the simulation coordinates without supervision.
 */
#include <iostream>
using namespace std;

class Partikel {  
private:  
    // # Atribut terkunci (tidak bisa diakses langsung dari main)  
    double posisi_x, posisi_y;

public:  
    // # Fungsi untuk mengubah posisi (update atribut private)
    void aturPosisi(double x, double y) {  
        posisi_x = x;  
        posisi_y = y;  
    }  
      
    // # Fungsi komputasi internal  
    void bergerak(double geser_x, double geser_y) {  
        posisi_x += geser_x;  
        posisi_y += geser_y;  
    }  
      
    void tampilkanPosisi() {  
        cout << "Posisi: (" << posisi_x << ", " << posisi_y << ")" << endl;  
    }  
};

int main() {  
    Partikel p1; // # p1 adalah wujud nyata (Objek)  
      
    p1.aturPosisi(0.0, 0.0);  
    p1.bergerak(2.5, 3.0);  
    p1.tampilkanPosisi();  
      
    return 0;  
}
