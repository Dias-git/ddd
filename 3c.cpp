#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;

    int start = sqrt(a);
    int end = sqrt(b);
    
    for (int i = start; i <= end; i++) {
        int square = i * i;
        if (square >= a && square <= b) {
            cout << square << " ";
        }
    }
    return 0;
}