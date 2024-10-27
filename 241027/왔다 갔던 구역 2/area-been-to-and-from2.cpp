#include <iostream>

using namespace std;

#define MAX_N 100
#define MAX_R 2000
#define OFFSET 1000

int main() {
    
    int n;
    int x1[MAX_N] = {0}, x2[MAX_N] = {0};
    int checked[MAX_R + 1] = {0};
    int cur = 0;
    int cnt = 0;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        int dis;
        char dir;
        cin >> dis >> dir;

        if (dir == 'L') {
            x1[i] = cur - dis;
            x2[i] = cur;
            cur -= dis;
        }
        else {
            x1[i] = cur;
            x2[i] = cur + dis;
            cur += dis;
        }

        x1[i] += OFFSET;
        x2[i] += OFFSET;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = x1[i]; j < x2[i]; ++j) {
            checked[j]++;
        }
    }

    for (int i = 0; i <= MAX_R; ++i) {
        if (checked[i] >= 2)
            cnt++;
    }

    cout << cnt;

    return 0;
}