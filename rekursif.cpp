#include <iostream>

using namespace std;

int hitungMundur(int n) {
    int jumlahAngkaUserHitungMundur = 0;
    if (n == 0) {
        return 0;
    } 

    cout << n << " ";

    return n + hitungMundur(n-1);
    jumlahAngkaUserHitungMundur+=n;
}

int main () {
    int angkaUser;
    cout << "Masukkan angka yang mau Anda lihat hitung-mundurnya: ";
    cin >> angkaUser;

    int hasil = hitungMundur(angkaUser);
    cout << endl;
    cout << "Sum of given: " << hasil << endl;
    return 0;
}