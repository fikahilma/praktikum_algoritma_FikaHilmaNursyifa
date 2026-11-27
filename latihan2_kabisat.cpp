#include <iostream>
using namespace std;
int main() {
    int tahun;
    cin >> tahun;

    if (tahun % 4 == 0) {
        cout << "KABISAT" << endl;
    } else {
        cout << "BUKAN KABISAT" << endl;
    }

    return 0;
}
    
