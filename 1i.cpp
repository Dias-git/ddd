#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;


    int b = a / 100;
    int c = (a % 100) / 10;
    int d = a % 10;
    int sum = b + c + d;

    cout << sum << endl;

    return 0;
}