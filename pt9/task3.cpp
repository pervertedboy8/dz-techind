// Дисциплина: Технологии индустриального программирования
// Практическое занятие №9. Задача №3: Перевод чисел в тексте в двоичную систему

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

// Функция перевода целого числа в двоичную систему счисления
string to_binary(unsigned long long n) {
    if (n == 0) return "0";
    string res = "";
    while (n > 0) {
        res += (n % 2 == 0 ? '0' : '1');
        n /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    if (!in.is_open()) {
        cerr << "Ошибка открытия файла input.txt" << endl;
        return 1;
    }

    string line;
    if (getline(in, line)) {
        string result = "";
        size_t i = 0;
        while (i < line.length()) {
            if (isdigit(static_cast<unsigned char>(line[i]))) {
                // Извлекаем непрерывную последовательность цифр
                unsigned long long num = 0;
                while (i < line.length() && isdigit(static_cast<unsigned char>(line[i]))) {
                    num = num * 10 + (line[i] - '0');
                    i++;
                }
                result += to_binary(num);
            } else {
                result += line[i];
                i++;
            }
        }
        out << result << endl;
    }

    in.close();
    out.close();
    return 0;
}
