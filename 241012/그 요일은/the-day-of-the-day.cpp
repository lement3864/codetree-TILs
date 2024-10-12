#include <iostream>
using namespace std;

int main() {
    
    int m1, d1, m2, d2, cnt = 0;
    string target_day;

    int days_month[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string days_week[8] = {"0", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    cin >> m1 >> d1 >> m2 >> d2 >> target_day;

    int now_day = 1;

    while (true) {
        if (m1 == m2 && d1 == d2) 
            break;
        
        d1++;
        now_day++;

        if (d1 > days_month[m1]) {
            m1++;
            d1 = 1;
        }

        if (now_day > 7) {
            now_day = 1;
        }

        if (days_week[now_day] == target_day) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}