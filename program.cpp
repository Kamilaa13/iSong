#include <iostream>
using namespace std;

void tampilkanGenre() {
cout << "Daftar Genre Lagu : " << endl;
cout << "1. Pop" << endl;
cout << "2. Rock" << endl;
cout << "3. Jazz" << endl;
cout << "4. RnB" << endl;
cout << "5. Kpop" << endl;
}

void pilihanGenre(int pilihan) {
    int pil;
    
    switch(pilihan) {
        case 1:
            cout << "Genre Pop: 1. Ariana Grande" << endl;
            cout << "           2. Sabrina Carpenter" << endl;
            cout << "           3. Bruno Mars" << endl;
            cout << "           4. Billie Eilish" << endl;
            cout << endl;
            cout << "Pilih artist (1 - 4)" << endl;
            cin >> pil;
            cout << endl;
            if (pil == 1) {
                cout << "Lagu Dari Ariana Grande : " << endl;
                cout << "1. Into You" << endl; 
                cout << "2. Greedy" << endl;
                cout << "3. The Boy Is Mine" << endl;
                cout << "4. Fantasize" << endl;
                cout << "5. Bloodline" << endl;
            } else if (pil == 2) {
                cout << "Lagu Dari Sabrina Carpenter : " << endl;
                cout << "1. Please please please" << endl;
                cout << "2. Taste" << endl;
                cout << "3. Espresso" << endl;
                cout << "4. Bad Chem" << endl;
                cout << "5. Vicious" << endl;
            } else if (pil == 3) {
                cout << "Lagu Dari Bruno Mars : " << endl;
                cout << "1. 24K Magic" << endl;
                cout << "2. Just The Way You Are" << endl;
                cout << "3. Grenade" << endl;
                cout << "4. It Will Rain" << endl;
                cout << "5. Die With A Smile" << endl;
            } else {
                cout << "Lagu Dari Billie Eilish : " << endl;
                cout << "1. Birds of A Feather" << endl;
                cout << "2. Bad Guy" << endl;
                cout << "3. When The Party's Over" << endl;
                cout << "4. Guess" << endl;
                cout << "5. All The Good Girls Go To Hell" << endl;
            }
          break;
        case 2:
            cout << "Genre Rock: 1. Bon Jovi" << endl;
            cout << "            2. My Chemical Romance" << endl;
            cout << "            3. 0asis" << endl;
            cout << "            4. a7x" << endl;
            cout << endl;
            cout << "Pilih artist (1 - 4)" << endl;
            cin >> pil;
            cout << endl;
            if (pil == 1) {
                cout << "Lagu Dari Bon Jovi : " << endl;
                cout << "1. I'll Be There For You" << endl; 
                cout << "2. It's My Life" << endl;
                cout << "3. You Give Love A Bad Name" << endl;
                cout << "4. Always" << endl;
                cout << "5. Livin' On A Prayer" << endl;
            } else if (pil == 2) {
                cout << "Lagu Dari My Chemical Romance : " << endl;
                cout << "1. Teenagers" << endl;
                cout << "2. Cancer" << endl;
                cout << "3. Disenchanted" << endl;
                cout << "4. Welcome To The Black Parade" << endl;
                cout << "5. I'm Not Okay (I Promise)" << endl;
            } else if (pil == 3) {
                cout << "Lagu Dari Oasis : " << endl;
                cout << "1. Don't Look Back In Anger" << endl;
                cout << "2. Wonderwall" << endl;
                cout << "3. Champagne Supernova" << endl;
                cout << "4. live Forever" << endl;
                cout << "5. Some Might Say" << endl;
            } else {
                cout << "Lagu Dari a7x : " << endl;
                cout << "1. Little Piece Of Heaven" << endl;
                cout << "2. Afterlife" << endl;
                cout << "3. Dear God" << endl;
                cout << "4. Nightmare" << endl;
                cout << "5. Hail To The King" << endl;
            }
          break;
        case 3:
            cout << "Genre Jazz: 1. Miles Davis" << endl;
            cout << "           2. Ella Fitzgerald" << endl;
            cout << "           3. Billie Holiday" << endl;
            cout << "           4. Charlie Parker" << endl;
            cout << "Pilih artist (1 - 4)" << endl;
            cin >> pil;
            if (pil == 1) {
                cout << "Lagu Dari Miles Davis : " << endl;
                cout << "1. Kind Of Blue" << endl; 
                cout << "2. So What" << endl;
                cout << "3. Freddie Freeloader" << endl;
                cout << "4. Blue in Green" << endl;
                cout << "5. All Blues" << endl;
            } else if (pil == 2) {
                cout << "Lagu Dari Ella Fitzgerald : " << endl;
                cout << "1. A Tisket, A Tasket" << endl;
                cout << "2. Summertime" << endl;
                cout << "3. My Funny Valentine" << endl;
                cout << "4. Cry Me a River" << endl;
                cout << "5. Mack the Knife" << endl;
            } else if (pil == 3) {
                cout << "Lagu Dari Billie Holiday : " << endl;
                cout << "1. Strange Fruit" << endl;
                cout << "2. I'll Be Seeing You" << endl;
                cout << "3. God Bless the Child" << endl;
                cout << "4. Lady Day and the Dial Tone" << endl;
                cout << "5. Don't Explain" << endl;
            } else {
                cout << "Lagu Dari Charlie Parker : " << endl;
                cout << "1. Ornithology" << endl;
                cout << "2. Koko" << endl;
                cout << "3. Now's the Time" << endl;
                cout << "4. Yardbird Suite" << endl;
                cout << "5. Confirmation" << endl;
            }
            break;
        case 4:
            cout << "Genre RnB: 1. H E R" << endl;
            cout << "           2. The Weeknd" << endl;
            cout << "           3. SZA" << endl;
            cout << "           4. Summer Walker" << endl;
            cout << "           5. Ari Lennox" << endl;
            cout << "Pilih artist (1 - 5)" << endl;
            cin >> pil;
            if (pil == 1) {
                cout << "Lagu Dari H E R : " << endl;
                cout << "1. Focus" << endl; 
                cout << "2. Best Part" << endl;
                cout << "3. Could've Been" << endl;
                cout << "4. Lost in Love" << endl;
                cout << "5. Damage" << endl;
            } else if (pil == 2) {
                cout << "Lagu Dari The Weeknd : " << endl;
                cout << "1. Starboy" << endl;
                cout << "2. Save Your Tears" << endl;
                cout << "3. Creepin" << endl;
                cout << "4. Can't Feel My Face" << endl;
                cout << "5. Blinding Lights" << endl;
            } else if (pil == 3) {
                cout << "Lagu Dari SZA : " << endl;
                cout << "1. Good Days" << endl;
                cout << "2. Kill Bill" << endl;
                cout << "3. The Weekend" << endl;
                cout << "4. Love Galore" << endl;
                cout << "5. Drew Barrymore" << endl;
            } else if (pil == 4) {
                cout << "Lagu Dari Summer Walker : " << endl;
                cout << "1. Girls Need Love" << endl;
                cout << "2. Come Thru" << endl;
                cout << "3. Playing Games" << endl;
                cout << "4. No Love ft.SZA" << endl;
                cout << "5. Let It Go" << endl;
            }else {
                cout << "Lagu Dari Ari Lennox : " << endl;
                cout << "1. Shea Butter Baby" << endl;
                cout << "2. BMO" << endl;
                cout << "3. Up Late" << endl;
                cout << "4. POF" << endl;
                cout << "5. Pressure" << endl;
            }
            break;
        case 5:
            cout << "Genre KPop: 1. NCY DREAM" << endl;
            cout << "            2. AESPA" << endl;
            cout << "            3. Red Velvet" << endl;
            cout << "            4. WAYV" << endl;
            cout << "            5. NCT 127" << endl;
            cout << "            6. RIIZE" << endl;
            cout << "            7. New Jeans" << endl;
            cout << "            8. IVE" << endl;
            cout << "            9. BTS" << endl;
            cout << "            10. EXO" << endl;
            cout << "Pilih artist (1 - 10)" << endl;
            cin >> pil;
            if ( pil == 1){
                cout << "Lagu dari NCT DREAM :" << endl;
                cout << "                       1. We Young (NCT DREAM)" <<endl;
                cout << "                       2. Beatbox (NCT DREAM)" <<endl;
                cout << "                       3. Glitch Mode(NCT DREAM)" <<endl;
                cout << "                       4. Rains in Heaven(NCT DREAM)" <<endl;
                cout << "                       5. Smoothie(NCT DREAM)" <<endl;
                cout << "                       6. Rainbow (NCT DREAM)" <<endl;
            }else if ( pil == 2){
                 cout << "Lagu dari AESPA :" << endl;
                cout << "                   1. Black Mamba (AESPA)" <<endl;
                cout << "                   2. Savage (AESPA)" <<endl;
                cout << "                   3. Next Level (AESPA)" <<endl;
                cout << "                   4. Supernova (AESPA)" <<endl;
                cout << "                   5. Dreams Come True (AESPA)" <<endl;
                cout << "                   6. Armageddon (AESPA)" <<endl;
            }else if ( pil == 3){
                cout << "Lagu dari Red Velvet :" << endl;
                cout << "                       1. Future (Red Velvet)" << endl;
                cout << "                       2. Bad Boy (Red Velvet)" << endl;
                cout << "                       3. Cosmic (Red Velvet)" << endl;
                cout << "                       4. Feel My Rhytm (Red Velvet)" << endl;
                cout << "                       5. Psycho (Red Velvet)" << endl;
                cout << "                       6. Red Flavor(Red Velvet)"<<endl;
            }else if (pil == 4){
                cout << "Lagu dari WAYV :" << endl;
                cout << "                   1. Love Talk (WAYV)" << endl;
                cout << "                   2. Phantom (WAYV)" << endl;
                cout << "                   3. Give Me That(WAYV)" << endl;
                cout << "                   4. Good Life(WAYV)" << endl;
                cout << "                   5. On My Youth (WAYV)" << endl;
                cout << "                   6. Broken Love(WAYV)"<<endl;
            }else if (pil == 5){
                cout << "Lagu dari NCT 127 :" << endl;
                cout << "                       1. Fast Check (NCT 127)" << endl;
                cout << "                       2. 0 MIle (NCT 127)" << endl;
                cout << "                       3. Regular(NCT 127)" << endl;
                cout << "                       4. Pilot(NCT 127)" << endl;
                cout << "                       5. Designer(NCT 127)" << endl;
                cout << "                       6. Kick It(NCT 127)"<< endl;
            }else if (pil == 6){
                cout << "Lagu dari RIIZE :" << endl;
                cout << "                   1. Get A Guitar (RIIZE)" << endl;
                cout << "                   2. Memories(RIIZE)" << endl;
                cout << "                   3. Love 119 (RIIZE)" << endl;
                cout << "                   4. Boom Boom Bas (RIIZE)" << endl;
                cout << "                   5. Siren(RIIZE)" << endl;
                cout << "                   6. One Kiss(RIIZE)" <<endl;
            }else if (pil == 7){
                cout << "Lagu dari NewJeans :" << endl;
                cout << "                       1. Super Shy (NewJeans)" << endl; 
                cout << "                       2. How Sweet (NewJeans)" << endl;
                cout << "                       3. Ditto (NewJeans)" << endl;
                cout << "                       4. OMG (NewJeans)" << endl;
                cout << "                       5. Bubble Gum(NewJeans)" << endl;
                cout << "                       6. Hype Boy (NewJeans)"<<endl;
            }else if (pil == 8){
                cout << "Lagu dari IVE :" << endl;
                cout << "                   1. I AM (IVE)" << endl;
                cout << "                   2. After LIKE (IVE)" << endl;
                cout << "                   3. Off The Record (IVE)" << endl;
                cout << "                   4. LOVE DIVE (IVE)" << endl;
                cout << "                   5. ELEVEN (IVE)" << endl;
                cout << "                   6. Kitsch (IVE)"<<endl;
            }else if (pil == 9){
                cout << "Lagu dari BTS :" << endl;
                cout << "                 1. Boy in Luv (BTS)" << endl;
                cout << "                 2. Euphoria (BTS)" << endl;
                cout << "                 3. FAKE LOVE (BTS)" << endl;
                cout << "                 4. Love Maze (BTS)" << endl;
                cout << "                 5. Magic Shop (BTS)" << endl;
                cout << "                 6. Butter (BTS)"<<endl;
            }else {
                cout << "Lagu dari EXO :" << endl;
                cout << "                   1. Love Shot (EXO)" << endl;
                cout << "                   2. The Eve (EXO)" << endl;
                cout << "                   3. Growl (EXO)" << endl;
                cout << "                   4. CALL ME BABY (EXO)" << endl;
                cout << "                   5. Ko Ko Bop (EXO)" << endl;
                cout << "                   6. Peter Pan (EX0)"<<endl;
            }
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

