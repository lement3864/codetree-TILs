#include <iostream>
using namespace std;

int main() {
    
    int m1, d1, m2, d2;
    int dayCnt = 0;

    cin >> m1 >> d1 >> m2 >> d2;

    //                 1.  2.  3.  4.  5.  6.  7.  8.  9.  10. 11. 12.
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while (true) {
        if (m1 == m2 && d1 == d2)
            break;

        dayCnt++;
        d1++;

        if (d1 > days[m1]) {
            m1++;
            d1 = 1;
        }
    }

    cout << dayCnt + 1;

    return 0;
}