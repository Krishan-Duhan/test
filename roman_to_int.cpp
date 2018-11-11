//Program to convert roman number to integer
#include<iostream>

using namespace std;

int romanToInt(string s) {
        int len = s.length();
        int number = 0;
        for(int i = 0; i < len; i++) {
            if(s[i] == 'I'){
                if(s[i+1] == 'V') {
                    number = number + 4;
                    i++;
                    //continue;
                } else if (s[i+1] == 'X') {
                    number = number + 9;
                    i++;
                    //continue;
                } else {
                    number = number + 1;
                }
            } else if(s[i] == 'V') {
                number = number + 5;
            } else if(s[i] == 'X') {
                if(s[i+1] == 'L') {
                    number = number + 40;
                    i++;
                } else if (s[i+1] == 'C') {
                    number = number + 90;
                    i++;
                    //continue;
                } else {
                    number = number + 10;
                }
            } else if(s[i] == 'L') {
                number = number + 50;
            } else if(s[i] == 'C') {
                if(s[i+1] == 'D') {
                    number = number + 400;
                    i++;
                } else if (s[i+1] == 'M') {
                    number = number + 900;
                    i++;
                    //continue;
                } else {
                    number = number + 100;
                }
            } else if(s[i] == 'D') {
                number = number + 500;
            } else if(s[i] == 'M') {
                number = number + 1000;
            }   
        }
        return number;
}

int main() {
    string input;
    int number;
    cout << "Enter a roman number:" << endl;
    cin >> input;

    number = romanToInt(input);
    cout << "Int value is: " << number << endl; 
}
