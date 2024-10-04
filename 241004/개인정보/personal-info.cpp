#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Info {
    public:
        string name;
        int height;
        float weight;

        Info(string name, int height, float weight) {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }

        Info(){}
};

bool compareHeight(Info a, Info b) {
    return a.height > b.height;
}

bool compareName(Info a, Info b) {
    return a.name < b.name;
}

int main() {
    
    Info infos[5];

    for (int i = 0; i < 5; ++i) {
        string name;
        int height;
        float weight;

        cin >> name >> height >> weight;

        infos[i] = Info(name, height, weight);
    }

    sort(infos, infos + 5, compareName);
    cout << "name" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << infos[i].name << " " << infos[i].height << " " << infos[i].weight << endl;
    }

    sort(infos, infos + 5, compareHeight);
    cout << endl << "height" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << infos[i].name << " " << infos[i].height << " " << infos[i].weight << endl;
    }

    return 0;
}