// Дисциплина: Технологии индустриального программирования
// Практическое занятие №8. Задача №2: Рекурсивный поиск НОД

#include <iostream>

using namespace std;

// Рекурсивная функция поиска НОД (алгоритм Евклида)
long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    long long a, b;

    if (cin >> a >> b) {
        cout << gcd(a, b) << endl;
    }

    return 0;
}
