#include <iostream>
using namespace std;

int main() {
    int knight_col, knight_row, target_col, target_row;
    
    cin >> knight_col >> knight_row;
    cin >> target_col >> target_row;
    if ((abs(knight_col - target_col) == 2 && abs(knight_row - target_row) == 1) ||
        (abs(knight_col - target_col) == 1 && abs(knight_row - target_row) == 2)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}