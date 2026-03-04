/*
 * EXPLORATION ANSWERS:
 * 1. Changing '||' to '&&' with input -5: -5 is < 0 (True) but NOT > 100 (False). True && False = False. So it skips the error block.
 * 2. Changing '>= 70' to '> 70' with input 70: 70 is not strictly greater than 70, so it drops to the 'else' block (Valid but doesn't meet requirements).
 */
#include <iostream>
using namespace std;

int main() {  
    double nilai;  
    cout << "Masukkan nilai observasi (0 - 100): ";  
    cin >> nilai;

    if (nilai < 0 || nilai > 100) {  
        cout << "Error: Nilai di luar batas wajar (Anomali)." << endl;  
    } else if (nilai >= 70) {  
        cout << "Status: Valid dan Memenuhi Syarat." << endl;  
    } else {  
        cout << "Status: Valid tapi Tidak Memenuhi Syarat." << endl;  
    }

    return 0;  
}
