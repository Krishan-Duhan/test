#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector <int> v1;
    for(int i = 0; i < 10; i++) {
        v1.push_back(i);
    }
    cout << "o/p of begin & end:\n";
    for(auto i = v1.begin(); i < v1.end(); i++)
	cout << *i;
    cout << endl;
    cout << "1st value is:" << v1.begin() << endl;
    cout << "sizeof int is:" << sizeof(int) << endl;
    cout << "sizeof vector using sizeof is:" << sizeof(v1) << endl;
    cout << "size of vector using v1.size is:" << v1.size() << endl;
    cout << "capacity of vector is:" << v1.capacity() << endl;
    cout << "max size of vector is:" << v1.max_size() << endl;

    cout << "0th element of v1 is:" << v1[0] << endl;
    cout << "1st element of v1 is:" << v1[1] << endl;
    cout << "0th element of v1 is:" << v1.at(0) << endl;
    cout << "1st element of v1 is:" << v1.at(1) << endl;
    return 0;
}
