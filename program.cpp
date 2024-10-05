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

int main(){
    int pilihan;
bool ulang = true;

while(ulang){
cout<<"==== Menu Genre Lagu===="<<endl;
tampilkanGenre();

cout<<"Pilih Genre (1 - 5) :";
cin>>pilihan;

pilihanGenre(pilihan);

cout<<"Apakah ada ingin memilih genre lain? (1 untuk Ya, 0 unutk Tidak):";
cin>>ulang;
}

cout<<"Terima Kasih telah menggunakan program ini";
return 0;
}

