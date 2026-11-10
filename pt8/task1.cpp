// Дисциплина: Технологии индустриального программирования
// Практическое занятие №8. Задача №1: Быстрое возведение в степень

#include <iostream>
#include <iomanip>

using namespace std;

// Рекурсивная функция быстрого возведения в степень за O(log n)
double power(double a, long long n) {
    if (n == 0) {
        return 1.0;
    }
    if (n < 0) {
        return 1.0 / power(a, -n);
    }
    
    double half = power(a, n / 2);
    if (n % 2 == 0) {
        return half * half;
    } else {
        return half * half * a;
    }
}

int main() {
    double a;
    long long n;

    if (cin >> a >> n) {
        // Вывод без научной нотации
        cout << fixed << setprecision(0) << power(a, n) << endl;
    }

    return 0;
}
