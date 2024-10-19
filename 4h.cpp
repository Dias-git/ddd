#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    char repeatedChar;
    for (int i = 0; i < s.length(); i++) {
        for (int j = i + 1; j < s.length(); j++) {
            if (s[i] == s[j]) {
                repeatedChar = s[i];
                cout << repeatedChar << endl;
                return 0;
            }
        }
    }

    return 0;
}