#include <iostream>
using namespace std;

int main() {
    long long n, m, k;
    cin >> n >> m >> k;
    if (k > 0 && k < n * m && ((k % n == 0 && k / n < m) || (k % m == 0 && k / m < n))) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
