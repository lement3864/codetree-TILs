#include <iostream>
using namespace std;

class Agent {
    public:
        char code;
        int score;

        Agent(char code, int score) {
            this->code = code;
            this->score = score;
        }

        Agent() {}
};

int main() {
    
    int minNum = 999;
    char agentCode;
    Agent agents[5];

    for(int i = 0; i < 5; ++i) {
        char code;
        int score;

        cin >> code >> score;

        agents[i] = Agent(code, score);
    }

    for(int i = 0; i < 5; ++i) {
        
        if(agents[i].score <= minNum) {
            minNum = agents[i].score;
            agentCode = agents[i].code;
        }
    }

    cout << agentCode << " " << minNum;

    return 0;
}