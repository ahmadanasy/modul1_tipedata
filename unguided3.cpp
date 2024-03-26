#include <iostream>
#include <string>
using namespace std;
class mahasiswa {
public:
 string name;
 string address;
 int age;
 // Constructor untuk inisialisasi objek mahasiswa
 mahasiswa (string n, string addr, int a) : name(n), address(addr), age(a) 
{}
 // Metode untuk menampilkan informasi mahasiswa
 void displayInfo() {
 cout << "Nama : " << name << endl;
 cout << "Alamat : " << address << endl;
 cout << "Umur : " << age << endl;
 }
};
int main() {
 // Membuat objek mahasiswa menggunakan constructor
 mahasiswa mhs1("Adan", "kalicupak", 19);
 mahasiswa mhs2("Ahmadan", "banyumas", 20);
 cout << "## mahasiswa 1 ##" << endl;
 mhs1.displayInfo();
 cout << "\n## mahasiswa 2 ##" << endl;
 mhs2.displayInfo();
 return 0;
}