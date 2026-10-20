#include <iostream>
using namespace std;

int main() {
    long long h, a, b;
    cin >> h >> a >> b;
    if (h <= a) {
        cout << 1 << endl;
    } else {
        cout << (h - b - 1) / (a - b) + 1 << endl;
    }
    return 0;
}
