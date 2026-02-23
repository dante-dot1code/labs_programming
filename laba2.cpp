#include <iostream>
#include <limits>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    cout << "Задание 1" << endl;
    int A, B;
    cout << "Введите два целых числа A и B: ";
    while (!(cin >> A >> B)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cerr << "Ошибка! Введите целые числа: ";
    }

    int start, end, step;
    if (A <= B) {
        start = A;
        end = B;
        step = 1;
    }
    else {
        start = A;
        end = B;
        step = -1;
    }

    int count = 0;
    cout << "Числа: ";
    for (int i = start; (step > 0 ? i <= end : i >= end); i += step) {
        cout << i << " ";
        count++;
    }
    cout << "\nКоличество N = " << count << endl;

    cout << "Задание 2" << endl;
    int N;
    cout << "Введите положительное целое число N > 0: ";
    while (!(cin >> N) || N <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cerr << "Ошибка! N должно быть положительным целым и > 0: ";
    }
    int K = 1;
    while (K * K <= N) {
        K++;
    }
    cout << "Наименьшее целое K, такое что K^2 > " << N << ", равно " << K << endl << endl;

    cout << "Задание 3" << endl;
    const double M = 80.0;
    const double m1 = 400.0;
    const double g = 9.8;
    cout << "m2 (г)    a (м/с²)" << endl;
    for (int m2 = 100; m2 <= 300; m2 += 20) {
        double a = (m2 - m1) / (m1 + m2 + M / 2.0) * g;
        cout << m2 << "    " << a << endl;
    }
    return 0;
}