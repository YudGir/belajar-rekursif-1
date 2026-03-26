#include <iostream>

using namespace std;

int hitungMundur(int n) {
    if (n == 0) {
        return 0;
    } 

    cout << n << " ";

    return n + hitungMundur(n-1);
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