#include <iostream>
using namespace std;

int main() {
    
    int a, b, c, d;
    int time = 0;

    cin >> a >> b >> c >> d;

    while (true) {
        if (a == c && b == d)
            break;

        time++;
        b++;

        if (b == 60) {
            a++;
            b = 0;
        }
    }

    cout << time;

    return 0;
}