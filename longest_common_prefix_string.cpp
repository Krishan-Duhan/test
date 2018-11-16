
#include<iostream>
#include<vector>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        int max_len_common = 0, len_common;
        string res;
        string s0;
        string s1;
        if(strs.size() == 0) return "";
        s0 = strs[0];
        int trav_length = s0.length();
        if(strs.size() == 1) return s0;
        
        for(int i = 1; i < strs.size(); i++) {
            s1 = strs[i];
            if(trav_length > s1.length()) trav_length = s1.length();
            len_common = 0;
            for(int j = 0; j < trav_length; j++) {
                if(s0[j] != s1[j]) {
                    break;
                } else {
                    len_common++;
                }
            }
            if(len_common == 0) {
                return "";
            } else if(max_len_common == 0) {
                max_len_common = len_common;
                trav_length = len_common;
            } else if(len_common < max_len_common) {
                 max_len_common = len_common;   
                 trav_length = len_common;
            }
        }
        res = s0.substr(0, len_common);
        return res;
}

/*
string longestCommonPrefix(vector<string>& strs) {
        int max_len_common = 0, len_common;
        string res;
        string s0 = strs[0];
        string s1;
        int trav_length = s0.length();
        
        if(strs.size() == 0) return "";
        for(int i = 1; i < strs.size(); i++) {
            s1 = strs[i];
            if(trav_length > s1.length()) trav_length = s1.length();
            len_common = 0;
            for(int j = 0; j < trav_length; j++) {
                if(s0[j] != s1[j]) {
                    break;
                } else {
                    len_common++;
                }
            }
            if(len_common == 0) {
                return "\"\"";
            } else if(max_len_common == 0) {
                max_len_common = len_common;
            } else if(len_common < max_len_common) {
                 max_len_common = len_common;   
            }
        }
        res = s0.substr(0, len_commo;
        return res;
} */

int main(){
	string res;
	vector<string> input;
	vector<string> input1;
	input.push_back("flower");
        input.push_back("flow");
        input.push_back("flight");

        //input1.push_back("");
	res = longestCommonPrefix(input1);
	cout << "Longest common prefix in input1 is: " << res << endl;
        res = longestCommonPrefix(input);
        cout << "Longest common prefix in input is: " << res << endl;

	return 0;
}
