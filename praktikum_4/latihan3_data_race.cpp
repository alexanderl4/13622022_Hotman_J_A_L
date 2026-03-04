/*
 * EXPLORATION ANSWER:
 * Moving 'int total = 0;' INSIDE the 'for' loop makes it a local variable for each iteration.
 * The calculation output becomes completely chaotic/wrong because 'total' is reset to 0 
 * in every single loop cycle. It forgets the previous accumulation entirely.
 */
#include <iostream>
#include <vector>
using namespace std;

int main() {  
    vector<int> data = {10, 20, 30, 40};  

    // # Eksplorasi: Memindahkan inisialisasi total ke DALAM loop
    for(int i = 0; i < data.size(); i++) {  
        int total = 0; // # Ini menyebabkan nilai total keriset terus menerus!
        total = total + data[i];   
        cout << "Iterasi ke-" << i << ", Nilai total sementara: " << total << endl;
    }

    // cout << "Total Akumulasi: " << total << endl; // # Ini akan error karena 'total' hanya ada di dalam loop

    return 0;  
}
