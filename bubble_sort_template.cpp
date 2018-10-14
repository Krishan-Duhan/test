#include<iostream>
using namespace std;

template <class T>
void buble_sort(T a, int size) {
    int i = 0,j = 0;
    for(i = size; i > -1; i--) {
        for(j = 0; j < i; j++) {
            if(a[j] > a[j + 1]) {
                swap(a[j], a[j+1]);
	    }
	}
    }
}

template <class X>
void swap(X &a, X &b) {
    X temp = a;
    a = b;
    b = temp;
}

int main() {
    int a[] = {4, 3, 2, 7, 1};
    //char a[] = {'g', 'a', 'd', 'b', 'c','\0'};
    int n = sizeof(a)/sizeof(a[0]);
    buble_sort(a, n);
    cout << "sorted array a is:\n";
    for(int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
