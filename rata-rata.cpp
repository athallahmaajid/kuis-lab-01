#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nilai_mhs;
    int n;
    double rata_rata, total;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int nilai;
        cout << "Masukkan nilai mahasiswa ke-" << i + 1 << ": ";
        cin >> nilai;
        nilai_mhs.push_back(nilai);
        total += nilai_mhs[i];
    }
    rata_rata = total / nilai_mhs.size();
    for (int i = 0; i < n; i++) {
        if (nilai_mhs[i] > rata_rata) {
            cout << "Nilai mahasiswa ke-" << i + 1 << " lebih besar dari rata-rata." << endl;
        }
    }
    cout << "Rata-rata nilai mahasiswa: " << rata_rata << endl;
}