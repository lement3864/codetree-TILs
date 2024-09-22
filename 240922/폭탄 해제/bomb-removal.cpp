#include <iostream>
#include <string>

using namespace std;

class Bomb {
    public:
        string code;
        char color;
        int time;

        Bomb(string code, char color, int time) {
            this->code = code;
            this->color = color;
            this->time = time;
        }

        Bomb() {}
};

int main() {
    
    Bomb bombInfo;
    string code;
    char color;
    int time;

    cin >> code >> color >> time;

    bombInfo = Bomb(code, color, time);

    cout << "code : " << bombInfo.code << endl;
    cout << "color : " << bombInfo.color << endl;
    cout << "second : " << bombInfo.time << endl;

    return 0;
}