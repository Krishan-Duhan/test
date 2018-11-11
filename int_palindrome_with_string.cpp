// Program to check if an integer is a palindrome, using string.
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool isPalindrome(int x) {
        string int_x = to_string(x);   //convert integer to string
        string rev_int_x = int_x;
        reverse(int_x.begin(),int_x.end());    // reverse the string using cpp in-built function
        /*or we could use swap function:
          int len = int_x.length();
          for(int i = 0; i < len/2; i++){
              swap(int_x[i], int_x[len - i - 1]);
          }
        */

        //Now compare the string chars from start and end to check palindrome
        if(int_x != rev_int_x){
            return false;    
        } else 
            return true;
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
