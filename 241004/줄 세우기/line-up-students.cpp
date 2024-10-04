#include <iostream>
#include <algorithm>

using namespace std;

class Student {
    public:
        int number, height, weight;

        Student(int number, int height, int weight) {
            this->number = number;
            this->height = height;
            this->weight = weight;
        }

        Student(){}
};

bool cmp(const Student &a, const Student &b) {
    if (a.height == b.height) {
        if (a.weight == b.weight) {
            return a.number < b.number;
        }
        return a.weight > b.weight;
    }
    return a.height > b.height;
}

int main() {
    
    int n;

    cin >> n;

    Student students[n];

    for (int i = 0; i < n; ++i) {
        int height, weight;
        cin >> height >> weight;

        students[i] = Student(i + 1, height, weight);
    }

    sort(students, students + n, cmp);

    for (int i = 0; i < n; ++i) {
        cout << students[i].height << " " << students[i].weight << " ";
        cout << students[i].number << endl;
    }


    return 0;
}