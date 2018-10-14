#include<iostream>
#include<set>
#include<iterator>

using namespace std;

int main(){
    set <int> tset;
    tset.insert(40);
    tset.insert(30);
    tset.insert(70);
    tset.insert(10);
    tset.insert(10);
    tset.insert(5);

    set <int> :: iterator itr;
    cout << "set tset is:\n";
    for(itr = tset.begin(); itr != tset.end(); itr++) {
        cout << *itr << endl;
    }
    cout << "size of tset is:" << tset.size() << endl;
    cout << "max_size of tset is:" << tset.max_size() << endl;
    //int pos = tset.find(30); cant be done because find doesnt return an integer,it returns an iterator type.
    //cout << "Element 30 has position:" << tset.find(30) << endl; cant be done
    cout << "erasing element 30 with  value ... \n";
    tset.erase(30);
    for(itr = tset.begin(); itr != tset.end(); itr++) {
        cout << *itr << endl;
    }
    cout << "erasing element 40 with iterator ...\n";
    tset.erase(tset.find(40));
    for(itr = tset.begin(); itr != tset.end(); itr++) {
        cout << *itr << endl;
    }
    return 0;
}
