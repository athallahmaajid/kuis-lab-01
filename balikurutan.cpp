#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<int> balik_urutan;
    cout << "Masukkan n angka: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int angka;
        cout << "Masukkan angka ke-" << i + 1 << ": ";
        cin >> angka;
        balik_urutan.push_back(angka);
    }
    cout << "Angka dalam urutan terbalik:" << endl;
    for (int i = n - 1; i >= 0; i--) {
        cout << balik_urutan[i] << endl;
    }
}