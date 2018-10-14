#include<iostream>
using namespace std;
float sal = 1;

class Employee {
    public:
    virtual void raise_salary() {
	cout << "For Employee:" << endl;
        sal += sal*0.05;
    }
};

class Manager: public Employee {
    public:
    virtual void raise_salary() {
	cout << "For manager:" << endl;
        sal += sal*0.02;
    }
};

int main() {
    Employee *emp = new Manager;
    emp->raise_salary();
    cout << sal << endl;
    return 0; 
}
