#include <iostream>

using namespace std;

int BinarySearch (int arr[], int left, int right, int target) {
    if (left > right) return -1;

    int mid = left + (right-left)/2;

    if (arr[mid] == target) return mid;

    if (arr[mid] < target) {
        return BinarySearch(arr, mid+1, right, target);
    } else {
        return BinarySearch(arr, left, mid-1, target);
    }
}

int main () {
    int array[10] = {0,1,2,3,4,5,6,7,8,9};
    int angkaUser;
    char respond;

    cout << "Yuk, dicoba programnya!\n";
    cout << "Angka Dalam List Tersedia: \n";
    cout << "_________________________\n";
    cout << "DERET AWAL\n";
    for (int i = 0; i <= 5; i+=5) {
        cout << i << "  ";
    }
    for (int i = 1; i <= 6; i+=5) {
        cout << i << "  ";
    }
    for (int i = 2; i <= 7; i+=5) {
        cout << i << "  ";
    }
    for (int i = 3; i <= 8; i+=5) {
        cout << i << "  ";
    }
    for (int i = 4; i <= 9; i+=5) {
        cout << i << "  ";
    }
    cout << "DERET AKHIR\n";
    cout << "_________________________\n";

    cout << "---KONFIRMASI DETAIL RBS---\n";
    int left_index = 0, right_index = 9;
    cout << "Default left_index = " << left_index << ", ya!\n";
    cout << "Default right_index = " << right_index << ", ey!\n";
    cout << "---END--\n\n";

    cout << "Masukkan angka kamu yang ingin dicari dari list menggunakan RBS (Recursive Binary Search): ";
    cin >> angkaUser;

    int hasil = BinarySearch(array, left_index, right_index, angkaUser);

    if (hasil == -1) {
        cout << "Yah, angka kamu ga ketemu, bre! Coba lagi nanti ya!\n";
        return 0;
    } else {
        cout << "Yes! Ketemu finally. Mantap.\n";
        cout << "Mau tau di indeks ke berapa? (y/n) ";
        cin >> respond;
        if (respond != 'y' || respond != 'Y' || respond != 'n' || respond != 'N') {
            cout << "Mohon responnya untuk yes (y) or no (n) saja!\n";
            return 0; //langsung kita shut off si user, hahaha (bercandyaaaaaaa, HAHA, stress wak) :)
        } else if (respond == 'y' || respond == 'Y') {
            cout << "Angka kamu ketemu di indeks " << hasil;
        } else if (respond == 'n' || respond == 'N') {
            cout << "Yudh si, g ush br-br bgt\n"; //user ceritanya korban dry text bruh, HAHAHAHA
        }
    }
}