#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        // Sort in descending order
        sort(A.begin(), A.end(), greater<int>());

        set<int> used;

        long long alex = 0, bob = 0;
        bool turn = true; // true = Alex, false = Bob

        for (int i = 0; i < N; i++) {

            // Skip if this chocolate quantity already used
            if (used.count(A[i]))
                continue;

            used.insert(A[i]);

            if (turn)
                alex += A[i];
            else
                bob += A[i];

            turn = !turn;
        }

        if (alex > bob)
            cout << "Alex" << endl;
        else
            cout << "Bob" << endl;
    }

    return 0;
}
