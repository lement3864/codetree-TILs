#include <iostream>
#include <algorithm>

using namespace std;

class Student {
    public:
        int h, w, idx;

        Student(int h, int w, int idx) {
            this -> h = h;
            this -> w = w;
            this -> idx = idx;
        }

        Student(){}
};

bool cmp(const Student &a, const Student &b) {
    if (a.h == b.h)
        return a.w > b.w;
    return a.h < b.h;
}

int main() {
    
    int n;
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; ++i) {
        int h, w;
        cin >> h >> w;

        students[i] = Student(h, w, i + 1);
    }

    sort(students, students + n, cmp);

    for (int i = 0; i < n; ++i) {
        cout << students[i].h << " " << students[i].w << " " << students[i].idx << endl;
    }

    return 0;
}