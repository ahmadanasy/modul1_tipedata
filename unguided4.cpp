#include <iostream>
#include <map>

using namespace std;

int main() {
   map<string, int> m;
       m["Adan"] = 20;
       m["Ahmadan"] = 25;
       m["Syaridin"] = 30;
       
 for (auto it = m.begin(); it != m.end(); ++it) {
     cout << it->first << " -> " << it->second << endl;
 }
 auto it = m.find("Syaridin");
 if (it != m.end()) {
     cout << "Nilai untuk key 'Syaridin': " << it->second << endl;
 } else {
     cout << "Key 'Syaridin' tidak ditemukan" << endl;
 }

 return 0;
}