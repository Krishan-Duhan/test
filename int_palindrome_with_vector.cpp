//Program to find if an integer is a palindrome, using vector
#include<iostream>
#include<vector>
using namespace std;

bool isPalindrome(int x) {
       vector<int> store;
        int y, len;
        if(x < 0)
            return false;
        else if(x == 0)
            return true;
        else {
           while(x > 0){
               y = x%10;
               store.push_back(y);
               x = x/10;
           }
           len = store.size();
           for(int i = 0; i < len/2; i++){
               if(store[i] != store[len - i - 1])
               return false;
           }
           return true;
        }
}

int main(){
    int x;
    bool ret;
    cout << "Enter an integer:";
    cin >> x;
    ret = isPalindrome(x);
    if(ret == true){
	    cout << x << " is a palindrome" << endl;
    }
    else cout << x << " is not a palindrome" << endl;
    return 0;
}
