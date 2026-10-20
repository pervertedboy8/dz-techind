#include <iostream>
using namespace std;
int main(){
    int n, m, w;
    cin >> n >> m >> w;
    bool mine[35][35] = {};
    for (int k = 0; k < w; k++) {
        int r, c;
        cin >> r >> c;
        mine[r][c] = true;               // координаты с 1
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (mine[i][j]) cout << "*";
            else {
                int cnt = 0;
                for (int di = -1; di <= 1; di++)
                    for (int dj = -1; dj <= 1; dj++)
                        if (mine[i + di][j + dj]) cnt++;
                cout << cnt;
            }
            if (j < m) cout << " ";      // уберите эту строку, если нужен вывод без пробелов
        }
        cout << "\n";
    }
    return 0;
}
