#include <iostream>
#include <string>

using namespace std;

class Agent {
    public:
        string code;
        char point;
        int time;

        Agent(string code, char point, int time) {
            this->code = code;
            this->point = point;
            this->time = time;
        }
};

int main() {
    string code;
    char point;
    int time;

    cin >> code >> point >> time;

    Agent agentEX = Agent(code, point, time);

    cout << "secret code : " << agentEX.code << endl;
    cout << "meeting point : " << agentEX.point << endl;
    cout << "time : " << agentEX.time << endl;

    return 0;
}