#include <iostream>
using namespace std;

float tambah(float a, float b) {
    return a + b;
}

float kurang(float a, float b) {
    return a - b;
}

float kali(float a, float b) {
    return a * b;
}

float bagi(float a, float b) {
    return a / b;
}

int main() {
    char op;
    float num1, num2;

    cout << "Masukkan operator (+, -, *, /): ";
    cin >> op;

    cout << "Masukkan dua bilangan: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            cout << "Hasil penjumlahan: " << tambah(num1, num2);
            break;
        case '-':
            cout << "Hasil pengurangan: " << kurang(num1, num2);
            break;
        case '*':
            cout << "Hasil perkalian: " << kali(num1, num2);
            break;
        case '/':
            if (num2 != 0) {
                cout << "Hasil pembagian: " << bagi(num1, num2);
            } else {
                cout << "Error! Pembagian dengan nol tidak bisa dilakukan.";
            }
            break;
        default:
            cout << "Error! Operator tidak valid.";
    }

    return 0;
}




