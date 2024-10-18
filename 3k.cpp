#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int number;
        cin >> number;
        sum += number;
    }
    cout << sum << endl;
    return 0;
}