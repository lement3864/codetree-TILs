// class를 사용해서 풀이 =============================================

// #include <iostream>
// #include <string>

// using namespace std;

// class Info {
//     public:
//         string id;
//         int level;

//         Info(string id = "codetree", int level = 10) {
//             this->id = id;
//             this->level = level;
//         }
// };

// int main() {
//     string text;
//     int num;

//     cin >> text >> num;

//     Info user1 = Info();

//     cout << "user " << user1.id << " lv " << user1.level << endl;    

//     user1.id = text;
//     user1.level = num;

//     cout << "user " << user1.id << " lv " << user1.level;    

//     return 0;
// }

// =======================================================================

// tuple을 사용해서 풀이

#include <iostream>
#include <string>
#include <tuple>

using namespace std;

int main() {
    string text;
    int num;

    cin >> text >> num;

    tuple<string, int> user = make_tuple("codetree", 10);

    string id;
    int level;

    tie(id, level) = user;

    cout << "user " << id << " lv " << level << endl;

    user = make_tuple(text, num);

    tie(id, level) = user;

    cout << "user " << id << " lv " << level;

    return 0;
}