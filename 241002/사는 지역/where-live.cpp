#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Info {
    public:
        string name, streetNum, local;

        Info(string name, string streetNum, string local) {
            this->name = name;
            this->streetNum = streetNum;
            this->local = local;
        }
        Info() {}
};

int main() {
    
    int n;
    cin >> n;

    Info infos[n];

    for (int t = 0; t < n; ++t) {
        string name, streetNum, local;
        cin >> name >> streetNum >> local;

        infos[t] = Info(name, streetNum, local);
    }

    // 사전순으로 이름이 가장 느린 사람 찾기
    int idx = 0;

    for (int i = 0; i < n; ++i) {
        if (infos[i].name > infos[idx].name)
            idx = i;
    }

    cout << "name " << infos[idx].name << endl;
    cout << "addr " << infos[idx].streetNum << endl;
    cout << "city " << infos[idx].local << endl;

    return 0;
}