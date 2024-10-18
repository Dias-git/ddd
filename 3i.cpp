#include <iostream>
using namespace std;

int main() {
    long long a;
    cin >> a;
    int count = 0;
    for (long long i = 1; i * i <= a; i++) {
        if (a % i == 0) {
            count++; 
            if (i != a / i) {
                count++;
            }
        }
    }
    



    cout << count << endl;
    return 0;
}