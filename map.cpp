#include<iostream>
#include<map>
#include<iterator>
using namespace std;

int main() {
    map <int, int> gquiz;
    gquiz.insert(pair <int, int> (0, 10));
    gquiz.insert(pair <int, int> (1, 30));
    gquiz.insert(pair <int, int> (2, 90));
    gquiz.insert(pair <int, int> (4, 60));
    gquiz.insert(pair <int, int> (3, 50));
    gquiz.insert(pair <int, int> (5, 70));
    gquiz.insert(pair <int, int> (6, 80));

    map <int, int> :: iterator itr;
    cout << "size of map is:" << gquiz.size() << endl;
    cout << "map gquiz is:" << endl;
    cout << "\tKEY\tELEMENT\n";

    for (itr = gquiz.begin(); itr != gquiz.end(); itr++) {
        cout << "\t" << itr->first;
        cout << "\t" << itr->second << endl;
    }

    map <int, int> gquiz2(gquiz.begin(), gquiz.end());
    gquiz2.erase(gquiz2.begin(), gquiz2.find(3));

    for (itr = gquiz2.begin(); itr != gquiz2.end(); itr++) {
        cout << "\t" << itr->first;
        cout << "\t" << itr->second << endl;
    }
    cout << "gquiz2 after erase is:\n";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); itr++) {
        cout << "\t" << itr->first;
        cout << "\t" << gquiz[itr->first] << endl;
    }

    return 0;
}
