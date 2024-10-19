#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string c;
    getline(cin, c); 

    int wordCount = 0;
    stringstream ss(c);
    string word;

    while (ss >> word)
        wordCount++;
    
    cout << wordCount << endl;
    return 0;
}