/*
 * EXPLORATION ANSWERS:
 * 1. Changing the read filename to "file_salah.txt": The program safely handles it; 
 * is_open() returns false, and it prints "File tidak ditemukan!" without crashing.
 * 2. Adding 999.9 manually and commenting the write block: The program acts purely as a reader,
 * successfully reading the old data plus the new manually added "999.9".
 */
#include <iostream>
#include <fstream> 
#include <string>  
using namespace std;

int main() {  
    // --- 1. PROSES MENULIS FILE ---  
    /* Blok ini dikomentari untuk Eksplorasi 2
    ofstream fileTulis("data_sensor.txt"); 
    if (fileTulis.is_open()) {  
        fileTulis << "100.5\n200.0\n150.5\n";  
        fileTulis.close(); 
        cout << "=> Data tersimpan di 'data_sensor.txt'\n";  
    }
    */

    // --- 2. PROSES MEMBACA FILE ---  
    ifstream fileBaca("data_sensor.txt"); // # Ubah ke 'file_salah.txt' untuk uji Eksplorasi 1 
    string baris_teks;  
      
    cout << "\n--- Membaca isi file ---" << endl;  
    if (fileBaca.is_open()) {  
        while (getline(fileBaca, baris_teks)) {  
            cout << "Isi file: " << baris_teks << endl;  
        }  
        fileBaca.close();  
    } else {  
        cout << "File tidak ditemukan!\n";  
    }

    return 0;  
}
