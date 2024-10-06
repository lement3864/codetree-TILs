#include <iostream>
using namespace std;

int main() {
    
    int day = 11, h = 11, m = 11;
    int cnt_time = 0;
    int a, b, c;

    cin >> a >> b >> c;

    if (a <= 11 && b <= 11 || c < 11){
        cout << -1;
    }
    else {
        while (true) {
            if (day == a && h == b && m == c)
                break;
            
            cnt_time++;
            m++;

            if (m > 60) {
                h++;
                m = 1;
            }
            if (h > 24) {
                day++;
                h = 1;
            }
        }
        cout << cnt_time;
    }


    return 0;
}