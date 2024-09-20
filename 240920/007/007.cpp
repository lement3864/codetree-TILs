#include <iostream>
#include <string>
#include <tuple>

using namespace std;


// class를 사용해서 풀이
// class Agent {
//     public:
//         string code;
//         char point;
//         int time;

//         Agent(string code, char point, int time) {
//             this->code = code;
//             this->point = point;
//             this->time = time;
//         }
// };

// int main() {
//     string code;
//     char point;
//     int time;

//     cin >> code >> point >> time;

//     Agent agentEX = Agent(code, point, time);

//     cout << "secret code : " << agentEX.code << endl;
//     cout << "meeting point : " << agentEX.point << endl;
//     cout << "time : " << agentEX.time << endl;

//     return 0;
// }

// tuple을 사용해서 풀이

tuple<string, char, int> agent;

int main() {
    string code;
    char point;
    int time;

    cin >> code >> point >> time;

    agent = make_tuple(code, point, time);

    string result_code;
    char result_point;
    int result_time;
    tie(result_code, result_point, result_time) = agent;

    cout << "secret code : " << result_code << endl;
    cout << "meeting point : " << result_point << endl;
    cout << "time : " << result_time << endl;
}