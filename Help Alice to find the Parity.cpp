#include <iostream>

using namespace std;


long long findXOR(long long n) {
    int remainder = n % 4;
    if (remainder == 0) return n;
    if (remainder == 1) return 1;
    if (remainder == 2) return n + 1;
    return 0;
}

int main() {
    long long L, R;
    if (!(cin >> L >> R)) return 0;

    
    long long xorSum = findXOR(R) ^ findXOR(L - 1);


    if (xorSum % 2 == 0) {
        cout << "even" << endl;
    } else {
        cout << "odd" << endl;
    }

    return 0;
}
