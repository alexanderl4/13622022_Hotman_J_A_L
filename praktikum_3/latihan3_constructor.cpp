/*
 * EXPLORATION ANSWER:
 * Changing the instantiation to 'Titik2D titikA;' (without arguments) triggers a compiler error.
 * Because we explicitly defined a constructor requiring two arguments, the default empty constructor is deleted.
 * C++ forces the programmer to be disciplined in defining the initial state of the entity.
 */
#include <iostream>
using namespace std;

class Titik2D {  
private:  
    double x, y;

public:  
    // # Constructor (Dipanggil otomatis saat objek dibuat)  
    Titik2D(double nilai_x, double nilai_y) {   
        x = nilai_x;  
        y = nilai_y;  
    }  
      
    void cetak() {   
        cout << "X: " << x << " | Y: " << y << endl;   
    }  
};

int main() {  
    // # Objek dibuat sekaligus diberi nilai awal via Constructor  
    Titik2D titikA(10.5, 20.2);   
    titikA.cetak();  
      
    return 0;  
}
