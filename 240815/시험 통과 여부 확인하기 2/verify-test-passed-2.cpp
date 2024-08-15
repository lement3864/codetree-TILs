#include <iostream>
using namespace std;

int main() {
    
    int students, score, cnt = 0;

    cin >> students;

    for (int i = 0; i < students; ++i)
    {
        int sum_val = 0;

        for (int j = 0; j < 4; ++j)
        {
            cin >> score;

            sum_val += score;   
        }

        if ((double)sum_val / 4 >= 60)
        {
            cout << "pass" << endl;
            cnt++;
        }
        else
            cout << "fail" << endl;
    }

    cout << cnt << endl;

    return 0;
}