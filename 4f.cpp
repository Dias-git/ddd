#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
    string line;
    getline(cin, line);

    stringstream ss(line);
    string word;
    string longestWord;
    int maxLength = 0;

    while (ss >> word) {
        if (word.length() > maxLength) {
            longestWord = word;
            maxLength = word.length();
        }
    }

    cout << longestWord << endl;
    cout << maxLength << endl;

    return 0;
}