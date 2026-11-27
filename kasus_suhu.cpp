#include <iostream>
using namespace std;
int main() {
    int T;
    // Membaca input langsung tanpa prompt teks
    cin >> T;
    // Evaluasi kondisi batas (Boundary Check:T>30) 
    if (T>30) {
        cout << "PERINGATAN PANAS" << endl;
    } else {
        cout << "SUHU AMAN" << endl;
    }

    return 0; 
}
