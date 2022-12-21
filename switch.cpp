#include <iostream>

using namespace std;

int main() {
    float liczba1, liczba2, suma;
    float iloraz;

    char klucz;
    cout << "podaj klucz: ";
    cin >> klucz;
    switch (klucz) {
        case 'a':
            cout << "Wybrałeś a";
            break;
        case 'b':
            cout << "Wybrałeś b";
            break;
        case 'c':
            cout << "Wybrałeś c";
            break;
        default:
            cout << " Zły wybór";

    }
}