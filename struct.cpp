#include <iostream>
using namespace std;

struct data_mahasiswa
{
    string nama, nim;
    double nilai;
};

int main() {
    int n;
    data_mahasiswa mahasiswa[n];
    cout << "Masukkan banyak mahasiswa: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Masukkan nama mahasiswa ke-" << i + 1 << ": ";
        cin >> mahasiswa[i].nama;
        cout << "Masukkan NIM mahasiswa ke-" << i + 1 << ": ";
        cin >> mahasiswa[i].nim;
        cout << "Masukkan nilai mahasiswa ke-" << i + 1 << ": ";
        cin >> mahasiswa[i].nilai;
    }
    double max = mahasiswa[0].nilai;
    for (int i = 0; i < n; i++) {
        if (mahasiswa[i].nilai > max) {
            max = mahasiswa[i].nilai;
        }
    }
    cout << "Mahasiswa dengan nilai tertinggi: " << max << endl;
}