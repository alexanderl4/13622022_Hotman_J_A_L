#include <iostream>
using namespace std;

// # 1. Buat Class bernama RekeningBank
class RekeningBank {
private:
    // # 2. Atribut private saldo
    double saldo;

public:
    // # 3. Constructor untuk mengisi saldo awal
    RekeningBank(double saldo_awal) {
        saldo = saldo_awal;
    }

    // # 4. Method public setor
    void setor(double jumlah) {
        saldo += jumlah;
        cout << "Setor berhasil. Saldo saat ini: Rp" << saldo << endl;
    }

    // # 5. Method public tarik dengan logika validasi
    void tarik(double jumlah) {
        if (jumlah > saldo) {
            cout << "Penarikan Gagal! Saldo tidak mencukupi." << endl;
        } else {
            saldo -= jumlah;
            cout << "Tarik berhasil. Sisa saldo saat ini: Rp" << saldo << endl;
        }
    }
};

int main() {
    // # Membuat objek rekening dengan saldo awal 500.000
    RekeningBank rek(500000.0);

    // # Simulasi transaksi
    rek.setor(200000.0);   // # Saldo menjadi 700.000
    rek.tarik(1000000.0);  // # Ditolak karena saldo kurang
    rek.tarik(150000.0);   // # Berhasil, sisa saldo 550.000

    return 0;
}
