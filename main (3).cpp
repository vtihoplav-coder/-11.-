#include <iostream>
using namespace std;

// 1) Перевантаження за ТИПОМ аргументів
int square(int x) {
    cout << "square(int): ";
    return x * x;
}

double square(double x) {
    cout << "square(double): ";
    return x * x;
}

long long square(long long x) {
    cout << "square(long long): ";
    return x * x;
}

// 2) Перевантаження за КІЛЬКІСТЮ аргументів
double average(int a, int b) {
    return (a + b) / 2.0;
}

double average(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

int main() {
    cout << "Приклад 1: перевантаження за типом" << endl;
    cout << square(5) << endl;           // виклик square(int)
    cout << square(2.5) << endl;         // виклик square(double)
    cout << square(10000000000LL) << endl; // виклик square(long long)

    cout << endl << "Приклад 2: перевантаження за кількістю аргументів" << endl;
    cout << "average(4, 8) = " << average(4, 8) << endl;
    cout << "average(3, 6, 9) = " << average(3, 6, 9) << endl;

    return 0;
}
