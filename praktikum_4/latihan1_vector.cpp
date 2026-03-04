/*
 * EXPLORATION ANSWERS:
 * 1. Adding pop_back() will remove the very last element (50). The size becomes 2.
 * 2. Adding clear() before the loop will empty the vector completely. The size becomes 0, 
 * and the subsequent loop will not execute at all.
 */
#include <iostream>
#include <vector>
using namespace std;

int main() {  
    vector<int> kumpulan_angka;

    // # Menyuntikkan data
    kumpulan_angka.push_back(10);  
    kumpulan_angka.push_back(25);  
    kumpulan_angka.push_back(50);

    // kumpulan_angka.pop_back(); // Hapus komentar ini untuk tes eksplorasi 1
    // kumpulan_angka.clear();    // Hapus komentar ini untuk tes eksplorasi 2

    for(int i = 0; i < kumpulan_angka.size(); i++) {  
        cout << "Data ke-" << i << ": " << kumpulan_angka[i] << endl;  
    }  
      
    return 0;  
}
