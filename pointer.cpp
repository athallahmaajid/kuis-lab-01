#include <iostream>
using namespace std;

void tukar(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
} 

int main() {
    int a, b;
    a = 10;
    b = 20;
    tukar(&a, &b);
    cout << "Nilai a setelah ditukar: " << a << endl;
    cout << "Nilai b setelah ditukar: " << b << endl;
}