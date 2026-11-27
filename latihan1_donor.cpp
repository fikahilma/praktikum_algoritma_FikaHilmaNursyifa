#include <iostream>
using namespace std;
int main() {
    int usia, berat;
    cin >> usia >> berat;

    if (usia >= 17 && berat >= 45) {
        cout << "LAYAK DONOR" << endl;
    } else {
        cout << "TIDAK LAYAK" << endl;
    }

    return 0;
}
    
