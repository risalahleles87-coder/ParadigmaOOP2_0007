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

// Derived Class Rekening Syariah
class RekeningSyariah : public RekeningBank {
public:
    RekeningSyariah(string nama, double saldoAwal)
        : RekeningBank(nama, saldoAwal) {}

    void potongAdmin() override {
        cout << "=== BANK GIBRAN JAYA ===" << endl;
        cout << "-----------------------------" << endl;

        cout << "Rekening Syariah bebas biaya admin" << endl;
    }
};

// Derived Class Rekening Konvensional
class RekeningKonvensional : public RekeningBank {
public:
    RekeningKonvensional(string nama, double saldoAwal)
        : RekeningBank(nama, saldoAwal) {}

    void potongAdmin() override {

        saldo -= 15000;

        cout << "Biaya admin Rp 15.000 berhasil dipotong" << endl;
    }
};

// Derived Class Rekening Premium
class RekeningPremium : public RekeningBank {
public:
    RekeningPremium(string nama, double saldoAwal)
        : RekeningBank(nama, saldoAwal) {}

    void potongAdmin() override {

        if (saldo > 10000000) {

            cout << "Saldo di atas Rp 10.000.000" << endl;
            cout << "Bebas biaya admin" << endl;
        }
        else {

            saldo -= 50000;

            cout << "Biaya admin Rp 50.000 berhasil dipotong" << endl;
        }
    }
};

