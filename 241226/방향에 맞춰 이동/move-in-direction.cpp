#include <iostream>

using namespace std;

int n;
int x = 0, y = 0;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
    
    cin >> n;

    for (int i = 0; i < n; ++i) {
        char dir_C;
        int move;
        int dir;

        cin >> dir_C >> move;

        if (dir_C == 'N')
            dir = 3;
        else if (dir_C == 'S') 
            dir = 1;
        else if (dir_C == 'E') 
            dir = 0;
        else
            dir = 2;

        x += dx[dir] * move;
        y += dy[dir] * move;
    }

    cout << x << " " << y;

    return 0;
}