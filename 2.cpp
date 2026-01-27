#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int result = N;
    int n = N;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            // i is a prime factor
            while (n % i == 0) {
                n /= i;
            }
            result -= result / i;
        }
    }

    // If n > 1, then it is a prime factor
    if (n > 1) {
        result -= result / n;
    }

    cout << result << endl;
    return 0;
}
