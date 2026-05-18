#include <iostream>
#include <iomanip>
using namespace std;

// Abstract Base Class
class RekeningBank {
protected:
    string namaNasabah;
    double saldo;

public:
    RekeningBank(string nama, double saldoAwal) {
        namaNasabah = nama;
        saldo = saldoAwal;
    }

    // Pure Virtual Function
    virtual void potongAdmin() = 0;

    void tampilkanSaldo() {

        cout << fixed << setprecision(0);

        cout << "Nasabah : " << namaNasabah << endl;
        cout << "Saldo   : Rp " << saldo << endl;
        cout << "-----------------------------" << endl;
    }
};
