#include <iostream>
using namespace std;

int main() {
    char s;
    cin >> s;
    
    if (s >= 'a' && s <= 'z') {
        cout << char(s - 'a' + 'A') << endl;  
    } else if (s >= 'A' && s <= 'Z') {
        cout << char(s - 'A' + 'a') << endl; 
    } else {
        cout << s << endl;  
    }
    return 0;
}