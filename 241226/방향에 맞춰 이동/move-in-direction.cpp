#include <iostream>

using namespace std;

int n;
int x = 0, y = 0;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
    
    cin >> n;

    for (int i = 0; i < n; ++i) {
        char dir;
        int move;

        cin >> dir >> move;

        if (dir == 'N') {
            x += dx[3] * move;
            y += dy[3] * move;
        }
        else if (dir == 'S') {
            x += dx[1] * move;
            y += dy[1] * move;
        }
        else if (dir == 'E') {
            x += dx[0] * move;
            y += dy[0] * move;
        }
        else{
            x += dx[2] * move;
            y += dy[2] * move;
        }
    }

    cout << x << " " << y;

    return 0;
}