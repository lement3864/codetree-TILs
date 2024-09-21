#include <iostream>
#include <string>

using namespace std;

class Info {
    public:
        string id;
        int level;

        Info(string id = "codetree", int level = 10) {
            this->id = id;
            this->level = level;
        }
};

int main() {
    string text;
    int num;

    cin >> text >> num;

    Info user1 = Info();

    cout << "user " << user1.id << " lv " << user1.level << endl;    

    user1.id = text;
    user1.level = num;

    cout << "user " << user1.id << " lv " << user1.level;    

    return 0;
}