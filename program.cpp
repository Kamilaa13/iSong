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
            cout << "Genre Pop: 1. Ariana Grande" << endl;
            cout << "           2. Sabrina Carpenter" << endl;
            cout << "           3. Bruno Mars" << endl;
            cout << "           4. Billie Eilish" << endl;
            cout << "Pilih artist (1 - 4)" << endl;
            cin >> pil;
            if (pil == 1) {
                cout << "Into You" << endl; 
                cout << "Greedy" << endl;
                cout << "The Boy Is Mine" << endl;
            } else if (pil == 2) {
                cout << "Please please please" << endl;
                cout << "Taste" endl;
            } else if (pil == 3) {
                cout << "24K Magic" << endl;
                cout << "Just The Way You Are" << endl;
            } else {
                cout << "Birds of A Feather" << endl;
                cout << "Bad Guy" << endl;
                cout << "When The Party's Over" << endl;
            }
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
            cout<<"We Young (NCT DREAM)\nBeatbox (NCT DREAM)\nGlitch Mode(NCT DREAM)\nRains in Heaven(NCT DREAM)\nSmoothie(NCT DREAM)\nRainbow (NCT DREAM)\n"<<endl;
            cout<<"Black Mamba (AESPA)\nSavage (AESPA)\nNext Level (AESPA)\nSupernova (AESPA)\nDreams Come True (AESPA)\nArmageddon (AESPA)\n"<<endl;
            cout<<"Future (Red Velvet)\nBad Boy (Red Velvet)\nCosmic (Red Velvet)\nFeel My Rhytm (Red Velvet)\nPsycho (Red Velvet)\nRed Flavor(Red Velvet)\n"<<endl;
            cout<<"Love Talk (WAYV)\nPhantom (WAYV)\nGive Me That(WAYV)\nGood Life(WAYV)\nOn My Youth (WAYV)\nBroken Love(WAYV)\n"<<endl;
            cout<<"Fast Check (NCT 127)\n0 MIle (NCT 127)\nRegular(NCT 127)\nPilot(NCT 127)\nDesigner(NCT 127)\nKick It(NCT 127)\n"<<endl;
            cout<<"Get A Guitar (RIIZE)\nMemories(RIIZE)\nLove 119 (RIIZE)\nBoom Boom Bas (RIIZE)\nSiren(RIIZE)\nOne Kiss(RIIZE)\n"<<endl;
            cout<<"Super Shy (NewJeans)\nHow Sweet (NewJeans)\nDitto (NewJeans)\nOMG (NewJeans)\nBubble Gum(NewJeans)\nHype Boy (NewJeans)\n"<<endl;
            cout<<"I AM (IVE)\nAfter LIKE (IVE)\nOff The Record (IVE)\nLOVE DIVE (IVE)\nELEVEN (IVE)\nKitsch (IVE)\n"<<endl;
            cout<<"Boy in Luv (BTS)\nEuphoria (BTS)\nFAKE LOVE (BTS)\nLove Maze (BTS)\nMagic Shop (BTS)\nButter (BTS)\n"<<endl;
            cout<<"Love Shot (EXO)\nThe Eve (EXO)\nGrowl (EXO)\nCALL ME BABY (EXO)\nKo Ko Bop (EXO)\nPeter Pan (EX0)\n"<<endl;
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

