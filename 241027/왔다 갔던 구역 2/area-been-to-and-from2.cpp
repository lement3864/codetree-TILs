#include <iostream>
using namespace std;

int main() {
    
    int n;
    int pos = 1000;
    int result = 0;
    int arr[2001] = {};

    cin >> n;

    for (int k = 0; k < n; ++k) {
        int x;
        char dir;

        cin >> x >> dir;

        int temp = pos;

        if (dir == 'R') {
            for (int i = temp; i < temp + x; ++i) {
                arr[i]++;
            }
            pos = temp + x;
        }
        else if (dir == 'L') {
            for (int i = temp; i > temp - x; --i) {
                arr[i]++;
            }
            pos = temp - x;
        }
    }

    for (int i = 0; i < 2001; ++i) {
        if (arr[i] >= 2)
            result++;
    }

    cout << result;

    return 0;
}