#include<iostream>
#include<vector>
using namespace std;


void a_decay(int (*p)[5]) {
    cout << "size of a in a_decay:" << sizeof(p);
}

void no_decay(int (&p)[5]) {
    cout << "sizeof a in no_decay" << sizeof(p); 
}

int main() {
	vector<int> test;
	test.push_back(2);
	cout << "sizeof vector:" << sizeof(test) << endl;
	cout << "size of vector:" << test.size() << endl;

    int a[] = {2, 3, 4, 1, 7};
    cout << "a=" << a << endl;
    cout << "&a=" << &a << endl;
    /*
    cout << "actual size of a is:" << sizeof(a);
    a_decay(a);
    no_decay(a);
    */
    return 0;
}
