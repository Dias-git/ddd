#include <iostream>
using namespace std;
bool IsDigit(unsigned char s) {
    return s >= '0' && s <= '9';  
}
int main() {
    char s;
    cin >> s;

    if (IsDigit(s)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}