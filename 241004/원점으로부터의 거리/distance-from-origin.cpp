#include <iostream>
#include <algorithm>

using namespace std;

class Dot {
    public:
        int x, y, dis, num;

        Dot(int x, int y, int dis, int num) {
            this -> x = x;
            this -> y = y;
            this -> dis = dis;
            this -> num = num;
        }

        Dot(){}
};

bool cmp(Dot a, Dot b) {
    if (a.dis == b.dis)
        return a.num < b.num;
    return a.dis < b.dis;
}

int main() {
    
    int n;

    cin >> n;

    Dot dots[n];

    for (int i = 0; i < n; ++i) {
        int x, y, dis;
        cin >> x >> y;

        dis = x * x + y * y;

        dots[i] = Dot(x, y, dis, i + 1);
    }

    sort(dots, dots + n, cmp);

    for (int i = 0; i < n; ++i) {
        cout << dots[i].num << endl;
    }

    return 0;
}