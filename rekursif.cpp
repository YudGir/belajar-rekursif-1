#include <iostream>

using namespace std;

void hitungMundur(int n) {
    if (n == 0) {
        return;
    } 

    cout << n << " ";

    hitungMundur(n-1);
}

int main () {
    int angkaUser;
    cout << "Masukkan angka yang mau Anda lihat hitung-mundurnya: ";
    cin >> angkaUser;

    hitungMundur(angkaUser);

    return 0;
}