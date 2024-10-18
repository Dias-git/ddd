#include <iostream>
using namespace std;

int main() {
    long long sum = 0; // Для хранения суммы

    for (int i = 0; i < 100; i++) {
        int num;
        cin >> num; // Считываем число
        sum += num; // Добавляем его к сумме
    }



    cout << sum << endl; // Выводим полученную сумму
    return 0;
}