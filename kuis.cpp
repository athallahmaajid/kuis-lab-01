#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> nilai;
  int n, data;
  int total = 0;
  
  cout << "Jumlah data: ";
  cin >> n;

  for (int i = 0; i < n; i++){
    cout << "Nilai ke-" << i + 1 << ": ";
    cin >> data;
    nilai.push_back(data);
    total += data;
  }

  double rataRata = (double) total / nilai.size();
  cout << "Rata-rata = " << rataRata << endl;

  cout << "Nilai di atas rata-rata" << endl;
  for (int i = 0; i < n; i++){
    if (nilai[i] > rataRata){
      cout << "nilai: " << nilai[i] << endl;
    }
  }
  return 0;
}
