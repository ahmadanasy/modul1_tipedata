#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  string Namaemiten;
  int lot;
  double hargasaham;

   cout<<"nama saham :";
  cin>>Namaemiten;

  cout<<"harga satuan saham : Rp. ";
  cin>>hargasaham;

   cout<<"jumlah lot saham: ";
  cin>>lot;

  double totalbiaya=lot=hargasaham;
  cout<<endl;
  cout<<"namaemiten\t: "<<Namaemiten<<endl;
  cout <<"lot saham\t:" <<lot *100<<"\t lembar"<< endl;
  cout <<"total biaya\t:" << fixed<< setprecision(2)<< totalbiaya<<endl;

  //jika memilih menu a,maka imput banyaknya lot,output nominal uang yang perlu dikeluarkan
//jika memilih menu b,maka imput adalah banyaknya uang yang dikeluarkan,output adalah lot yang diperoleh

  char menu;
    cout << "Pilih menu (A/B) : ";
    cin >> menu;

    if (menu == 'a'||'A') {
       
        double inputUang;
        cout << "Masukkan jumlah uang yang ingin dikeluarkan: Rp. ";
        cin >> inputUang;
        int lotDidapatkan = inputUang / hargasaham;
        cout << "Lot yang diperoleh: " << lotDidapatkan << " lembar" << endl;
    } else if (menu == 'b'||'B') {
        
        int inputLot;
        cout << "Masukkan jumlah lot yang ingin dibeli: ";
        cin >> inputLot;
        double totalbiaya = inputLot * hargasaham;
        cout << "Total biaya yang dikeluarkan: Rp. " << fixed << setprecision(2) << totalbiaya<< endl;
    } else {
        cout << "Menu tidak valid" << endl;
    }

    //Prediksi harga saham selama 30 hari 

    for(int i = 1; i <= 30; i++){
        hargasaham += (hargasaham * 0.005); // Kenaikan 0.5%
        cout << "Harga saham pada hari ke-" << i << ": Rp. " << hargasaham << "/lembar" << endl;
    }

return 0;
}


