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
    char respond = 'y';
    int percobaanPencarian = 0;

    do {
    while (respond == 'y' || respond == 'Y') { 
        if (respond == 'n' || respond == 'N') {
        cout << "\n";
        cout << "Hh, u lg :(\n";
        cout << "Mo lg g? Klo g mo lg, ya exit aj!\n"; //dry text bgt woi, HAHAH :)
        }
    cout << "\n";
    cout << "Hai!\n";
    cout << "Yuk, dicoba programnya langsung!\n";
    break;
    } 
    
    cout << "Angka Dalam List Tersedia: \n";
    cout << "___________________________\n";
    cout << "DERET AWAL\n";
    for (int i = 0; i <= 5; i+=5) {
        cout << i << "  ";
    }
    cout << endl;
    for (int i = 1; i <= 6; i+=5) {
        cout << i << "  ";
    }
    cout << endl;
    for (int i = 2; i <= 7; i+=5) {
        cout << i << "  ";
    }
    cout << endl;
    for (int i = 3; i <= 8; i+=5) {
        cout << i << "  ";
    }
    cout << endl;
    for (int i = 4; i <= 9; i+=5) {
        cout << i << "  ";
    }
    cout << endl; //se-effort itu wak cuman buat nampilin visual 'tabel' hahaha pake for melulu, that's okey ya, aku hanya mencoba yg 'new to me' hihi
    cout << "DERET AKHIR\n";
    cout << "___________________________\n\n";

    cout << "---KONFIRMASI DETAIL RBS---\n";
    int left_index = 0, right_index = 9;
    cout << "Default left_index = " << left_index << ", ya!\n";
    cout << "Default right_index = " << right_index << ", ey!\n";
    cout << "---         END         ---\n\n";

    if (respond == 'y' || respond == 'Y') {
    cout << "Masukkan angka kamu yang ingin dicari dari list menggunakan RBS (Recursive Binary Search): ";
    cin >> angkaUser;
    } else if (respond == 'n' || respond == 'N') {
    cout << "Dih, cpt mskin angka u pk RBS (Recursive Binary Search)-ny: ";
    cin >> angkaUser;
    }

    int hasil = BinarySearch(array, left_index, right_index, angkaUser);

    if (hasil == -1) {
        if (respond == 'y' || respond == 'Y') {
            if (percobaanPencarian == 0) {
                cout << "Yah, angka kamu ga ketemu, bre! Coba lagi ya!\n";
            } else {
                cout << "Yah, angka kamu ga ketemu lagi dong! Yuk, coba lagi sampai ketemu ya!\n";
            }
        } else if (respond == 'n' || respond == 'N') {
            if (percobaanPencarian == 0) {
                cout << "Yahaha, g ktmu kn, sok br-br sih u! bt gw soalnya.\n"; //buset, galak amat wkwk
            } else {
                cout << "Mantap, sng gweh angka u g ktm lg. Mknya jgn sinis dong!\n";
            }
        }
    } else {
        string responProgram;
        if (percobaanPencarian == 0) {responProgram = "pertama";}
        else if (percobaanPencarian == 1) {responProgram = "kedua";}
        else if (percobaanPencarian == 2) {responProgram = "ketiga";}

        if (respond == 'y' || respond == 'Y') {
            if (percobaanPencarian == 0) {
            cout << "Yes! Ketemu bre langsung di percobaan pencarian " << responProgram << ". Mantap!\n";
            } else {
            cout << "Nahh! Ketemu lagi di percobaan " << responProgram << "nya. Gigih banget!\n";
            }
        } else if (respond == 'n' || respond == 'N') {
            if (percobaanPencarian == 0) {
            cout << "Y, brtng bgt ktm pas nyoba " << responProgram << " kali. Lucky bgt :(\n";
            } else {
            cout << "Yah, u lg, ktm tuh pas nyoba " << responProgram << "nya. Exit ga lo!\n"; //buset galak amat, makin makin yaa haha :)
            }
        }
        
        if (respond == 'y' || respond == 'Y') {
        cout << "Mau tau di indeks ke berapa? (y/n) ";
        } else if (respond == 'n' || respond == 'N') {
            if (percobaanPencarian > 0 && percobaanPencarian < 3) {
            cout << "g ykn mo lt lg indeks ke brp, kan? YA EXIT AJA LAH, HUUH!\n"; //set, makin makin ya, haha
            cout << "(msh ad kesmptn ni gweh ksh, ktk mo lg g): "; //se-DRY TEXT KORBANNYA BRO, YAHAHA
            }
        }
        
        cin >> respond;
        if (respond == 'y' || respond == 'Y') {
            cout << "Angka kamu ketemu di indeks ke- " << hasil << ". Keren euy!\n";   
        } else if (respond == 'n' || respond == 'N') {
            cout << "Yodh si, g ush br-br bgt kek gt, uhh, sebel deh!\n"; //user ceritanya korban dry text bruh, HAHAHAHA
        } else {
            cout << "Mohon responnya untuk yes (y) or no (n) saja!\n";
            return 0; //langsung kita shut off si user, hahaha (bercandyaaaaaaa, HAHA, stress wak) :)
        }
    }
    percobaanPencarian++;

    } while (percobaanPencarian < 3);

    if (percobaanPencarian == 3) {
        if (respond == 'y' || respond == 'Y') {
        cout << "Woy, udah cukup ya nyoba programnya! Thanks udah sempetin nyoba! Hihi\n";
        return 0;
        } else if (respond == 'n' || respond == 'N') {
        cout << "mksh\n"; //titik jenuh programmer, hahah
        return 0;
        }
    }
}