#include <iostream>
using namespace std;

int main() {
    
    int a, b, maxNum;

    cin >> a >> b;

    maxNum = a > b ? a : b;

    cout << maxNum;

    return 0;
}