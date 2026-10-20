#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int st[1005], top = 0, cnt = 0;   // стек студентов
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (top > 0 && st[top - 1] == x) { top--; cnt += 2; }
        else st[top++] = x;
    }
    cout << cnt << "\n";
    return 0;
}
