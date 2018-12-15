class Solution {
public:
    string countAndSay(int n) {
        string temp, res,str_count;
        int count = 1;
        if(n == 1) {
            temp = "1";
            return temp;
        } else if(n <= 30) {
            temp = countAndSay(n-1);
            for(int i = 0; i < temp.size(); i++){
                if(i >= (temp.size() - 1)) {
                }
                else if((temp[i] == temp[i+1])) {
                    count++;
                    continue;
                }
                str_count = to_string(count);
                res.append(str_count);
                res += temp[i];
                count = 1;
            }
            return res;
        }
    } 
};
