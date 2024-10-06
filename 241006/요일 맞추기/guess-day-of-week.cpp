#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int m1, d1, m2, d2;
    int daysOfMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string daysOfWeek[8] = {"0", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int day = 1;

    cin >> m1 >> d1 >> m2 >> d2;
    
    // 기준 이전 시기일때
    if (m1 > m2 || (m1 == m2 && d1 > d2)) {
        while (true) {
            if (m1 == m2 && d1 == d2)
                break;
            
            day--;
            d2++;

            if (d2 > daysOfMonth[m2]) {
                m2++;
                d2 = 1;
            }

            if (day < 1) {
                day = 7;
            }
        }

        cout << daysOfWeek[day];
    }
    // 기준 다음 시기일때
    else {
        while (true) {
            if (m1 == m2 && d1 == d2)
                break;
            
            day++;
            d1++;

            if (d1 > daysOfMonth[m1]) {
                m1++;
                d1 = 1;
            }

            if (day > 8) {
                day = 1;
            }
        }

        cout << daysOfWeek[day];
    }


    return 0;
}