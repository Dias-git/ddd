#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if (s2.find(s1) != string::npos) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}