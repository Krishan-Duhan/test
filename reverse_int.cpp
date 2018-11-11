#include<iostream>

using namespace std;

int reverse_int(int x){
    int temp,rev = 0;

    while(x > 0){
       temp = x%10;
       if((rev > INT32_MAX/10) || (rev == INT32_MAX/10 && temp > 7)){
           return 0;
       }
       if((rev < INT32_MIN/10) || (rev == INT32_MIN/10 && temp < -8)){
           return 0;
       }

       rev = rev*10 + temp;
       x /= 10;
    }
    return rev;
}

int main(){
    int y, rev_y;
    cout << "Enter the int: " << endl;
    cin >> y;

    rev_y = reverse_int(y);
    cout << "reverse of int is:" << rev_y << endl;
    return 0; 
}
