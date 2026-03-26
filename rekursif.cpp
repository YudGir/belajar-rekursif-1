#include <iostream>

using namespace std;

int jumlahAngkaUserHitungMundur = 0;

void hitungMundur(int n) {
    if (n == 0) {
        return;
    } 

    cout << n << " ";

    hitungMundur(n-1);
    jumlahAngkaUserHitungMundur+=n;
}

int main () {
    int angkaUser;
    cout << "Masukkan angka yang mau Anda lihat hitung-mundurnya: ";
    cin >> angkaUser;

    hitungMundur(angkaUser);
    cout << endl;
    cout << "Sum of given: " << jumlahAngkaUserHitungMundur << endl;
    return 0;
}