#include <iostream>
using namespace std;
int main(){
    double x, y;
    cin >> x >> y;
    int day = 1;
    while (x < y) {      // пока сумма меньше Y
        x *= 1.1;        // +10% в каждый следующий день
        day++;
    }
    cout << day << "\n";
    return 0;
}
