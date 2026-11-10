// Дисциплина: Технологии индустриального программирования
// Практическое занятие №8. Задача №3: Перекладывание ингредиентов (Ханойская башня)

#include <iostream>

using namespace std;

// Рекурсивная функция перекладывания ингредиентов
void hanoi(int n, int source, int target, int auxiliary) {
    if (n == 0) {
        return;
    }
    // 1. Перекладываем n - 1 верхних ингредиентов на вспомогательную салфетку
    hanoi(n - 1, source, auxiliary, target);

    // 2. Перекладываем n-й ингредиент на целевую салфетку
    cout << "Ingredient " << n << " move from " << source << " to " << target << "\n";

    // 3. Перекладываем n - 1 ингредиентов со вспомогательной на целевую
    hanoi(n - 1, auxiliary, target, source);
}

int main() {
    int n;

    if (cin >> n) {
        hanoi(n, 1, 3, 2);
    }

    return 0;
}
