#include <iostream>
using namespace std;

int main() {
    
    int a, b, c, sumNum, avg;

    cin >> a >> b >> c;

    sumNum = a + b + c;
    avg = sumNum / 3;

    cout << sumNum << "\n" << avg << "\n" << sumNum - avg;

    return 0;
}