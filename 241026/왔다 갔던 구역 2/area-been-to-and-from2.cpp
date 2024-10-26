#include <iostream>
using namespace std;

int main() {
    
    int n;
    int pos = 500;
    int result = 0;
    int arr[1001] = {};

    cin >> n;

    for (int k = 0; k < n; ++k) {
        int x;
        int temp = pos;
        char dir;

        cin >> x >> dir;

        if (dir == 'R') {
            for (int i = temp; i <= temp + x; ++i) {
                arr[i]++;
                pos++;
            }
        }
        else if (dir == 'L') {
            for (int i = temp; i >= temp - x; --i) {
                arr[i]++;
                pos--;
            }
        }
    }

    for (int i = 0; i < 1001; ++i) {
        if (arr[i] > 2)
            result++;
    }

    cout << result - 1;

    return 0;
}