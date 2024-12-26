#include <iostream>
#include <string>

using namespace std;

string text;
int dir = 0;
int x = 0, y = 0;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main() {
    
    cin >> text;

    for (int i = 0; i < text.length(); ++i) {
        if (text[i] == 'L') {
            dir = (dir - 1 + 4) % 4;
        }
        else if (text[i] == 'R') {
            dir = (dir + 1) % 4;
        }
        
        if (text[i] == 'F') {
            x += dx[dir];
            y += dy[dir];
        }
    }

    cout << x << " " << y;

    return 0;
}