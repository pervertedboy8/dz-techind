#include <iostream>
using namespace std;

int main() {
    long long a, b;
    char op;
    cin >> a >> op >> b;
    if (op == '+') {
        cout << a + b << endl;
    } else if (op == '-') {
        cout << a - b << endl;
    } else if (op == '*') {
        cout << a * b << endl;
    } else if (op == '/') {
        if (b == 0) {
            cout << "Division by zero" << endl;
        } else {
            cout << (double)a / b << endl;
        }
    }
    return 0;
}
