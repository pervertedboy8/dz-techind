// Дисциплина: Технологии индустриального программирования
// Практическое занятие №9. Задача №2: Поиск подстроки (Детективное расследование)

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream in1("input1.txt");
    ifstream in2("input2.txt");

    if (!in1.is_open() || !in2.is_open()) {
        cerr << "Ошибка открытия входных файлов!" << endl;
        return 1;
    }

    string X, Y;
    in1 >> X;
    in2 >> Y;

    in1.close();
    in2.close();

    // Проверяем, является ли строка Y подстрокой в строке X
    if (X.find(Y) != string::npos) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
