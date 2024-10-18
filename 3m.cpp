#include <iostream>
using namespace std;

int main() {
    int N, count = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int number;
        cin >> number;
        if (number == 0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}