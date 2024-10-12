#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int t = n % 1440;
    int h = t / 60;
    int m = t % 60;

    cout << h << " " << m << endl;

    return 0;
}