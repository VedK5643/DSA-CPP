#include <iostream>
using namespace std;

void printPattern(int n) {
    static int i = 1;

    if (i > n)
        return;

    cout << i << " ";
    i++;

    printPattern(n);

    i--;
    if (i != n){
        cout << i << " ";
    }
}

int main() {
    int n;
    cin >> n;
    printPattern(n);
    return 0;
}