// Дисциплина: Технологии индустриального программирования
// Практическое занятие №9. Задача №1: Очистка текста от букв из "user agreement"

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

// Функция проверяет, входит ли символ в фразу "user agreement"
bool is_user_agreement_char(char c) {
    char lower_c = tolower(static_cast<unsigned char>(c));
    string target = "useragreement";
    for (char t : target) {
        if (lower_c == t) {
            return true;
        }
    }
    return false;
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    if (!in.is_open()) {
        cerr << "Ошибка открытия файла input.txt" << endl;
        return 1;
    }

    char ch;
    // Посимвольное чтение с сохранением всех пробелов и переносов строк
    while (in.get(ch)) {
        if (!is_user_agreement_char(ch)) {
            out.put(ch);
        }
    }

    in.close();
    out.close();
    return 0;
}
