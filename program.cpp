#include <iostream>
using namespace std;

void tampilkanGenre() {
cout << "Daftar Genre Lagu : " << endl;
cout << "1. Pop" << endl;
cout << "2. Rock" << endl;
cout << "3. Jazz" << endl;
cout << "4. Klasik" << endl;
cout << "5. Kpop" << endl;
}

void pilihanGenre(int pilihan) {
    switch(pilihan) {
        case 1:
            cout << "Genre Pop: "<<endl;
            break;
        case 2:
            cout << "Genre Rock: "<<endl;
            break;
        case 3:
            cout << "Genre Jazz: "<<endl;
            break;
        case 4:
            cout << "Genre Klasik: "<<endl;
            break;
        case 5:
            cout << "Genre Kpop: "<<endl;
            break;
        default:
            cout << "Pilihan tidak valid"<<endl;
            break;
    }
}


