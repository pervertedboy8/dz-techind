#include <iostream>
#include <string>
using namespace std;

int main() {
    int x;
    cin >> x;
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    string result = "";
    for (int i = 0; i < 13; i++) {
        while (x >= values[i]) {
            result += symbols[i];
            x -= values[i];
        }
    }
    cout << result << endl;
    return 0;
}
