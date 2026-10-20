#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int v;
            if (i + j < n - 1) v = 0;        // выше побочной диагонали
            else if (i + j == n - 1) v = 1;  // на побочной диагонали
            else v = 2;                      // ниже
            cout << v << (j + 1 < n ? " " : "");
        }
        cout << "\n";
    }
    return 0;
}
