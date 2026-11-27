#include <iostream>
using namespace std;
int main() {
    int jam;
    cin >> jam;

    int total;
    if (jam <= 2) {
        total = 3000;
    } else { 
        total = 3000 + (jam-2) * 1500;
    }

    cout << total;
    return 0;
    }
    
