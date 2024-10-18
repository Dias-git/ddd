#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    cin >>a>>b>>c>>d;
    int i=a;
    while (i <= b) {
        if (i % d == c) { 
            cout << i << " ";
        }
        i++; 
    }

    cout << endl; 
    return 0;
}