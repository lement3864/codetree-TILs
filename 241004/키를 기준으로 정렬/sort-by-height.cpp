#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Info {
    public:
        string name;
        int height, weight;

        Info(string name, int height, int weight) {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }

        Info() {}
};

bool compareHeight(const Info &a, const Info &b) {
    return a.height < b.height;
}

int main() {
    
    int n;

    cin >> n;

    Info infos[n];

    for (int i = 0; i < n; ++i) {
        string name;
        int height, weight;

        cin >> name >> height >> weight;

        infos[i] = Info(name, height, weight);
    }

    sort(infos, infos + n, compareHeight);

    for(int i = 0; i < n; ++i) {
        cout << infos[i].name << " " << infos[i].height << " " << infos[i].weight << endl;
    }

    return 0;
}