#include <iostream>
using namespace std;

int n;
int result = 0;

int arr[101][101];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool InRange(int x, int y, int n) {
    return (0 <= x && x <= n && 0 <= y && y <= n);
}

int main() {
    
    cin >> n;

    for (int i = 0; i < n; ++ i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; ++ i) {
        for (int j = 0; j < n; ++j) {
            cnt = 0;

            for (int k = 0; k < 4; ++k) {
                nx = i + dx[k];
                ny = j + dy[k];
                
                if (InRange(nx, ny, n) && arr[nx][ny] == 1)
                    cnt++;
            }

            if (cnt >= 3)
                result++;
        }
    }

    cout << result;

    return 0;
}