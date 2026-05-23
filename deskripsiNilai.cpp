#include <iostream>
#include <vector>
using namespace std;

double hitungTotal(vector<double> nilai) {
    double total = 0;
    for (int i = 0; i < nilai.size(); i++) {
        total += nilai[i];
    }
    return total;
}

double hitungRataRata(double total, int n) {
    double rata_rata;
    return rata_rata = total / n;
}

double cariNilaiTertinggi(vector<double> nilai) {
    double max = nilai[0];
    for (int i = 0; i < nilai.size(); i++) {
        if (nilai[i] > max) {
            max = nilai[i];
        }
    }
    return max;
}

double cariNilaiTerendah(vector<double> nilai) {
    double min = nilai[0];
    for (int i = 0; i < nilai.size(); i++) {
        if (nilai[i] < min) {
            min = nilai[i];
        }
    }
    return min;
}

int main() {
    vector<double> nilai_mhs;
    int n;
    
    cout << "Masukkan banyak mahasiswa: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        double nilai;
        cout << "Nilai mahasiswa ke-" << i + 1 << ": ";
        cin >> nilai;
        nilai_mhs.push_back(nilai);
    }

    double total = hitungTotal(nilai_mhs);
    double rata_rata = hitungRataRata(total, n);
    double nilai_tertinggi = cariNilaiTertinggi(nilai_mhs);
    double nilai_terendah = cariNilaiTerendah(nilai_mhs);

    cout << "Total: " << total << endl;
    cout << "Rata-rata: " << rata_rata << endl;
    cout << "Nilai tertinggi: " << nilai_tertinggi << endl;
    cout << "Nilai terendah: " << nilai_terendah;
}