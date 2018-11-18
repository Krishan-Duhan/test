//Function to remove duplicate elements from an array in O(1) space complexity and return length of new array.
#include<iostream>
#include<vector>

using namespace std;

    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int j = 0;
        for(int i = 0; i < nums.size(); i++) {
            j++;
            if(j >= nums.size()) return(i + 1);
            while(nums[i] == nums[j]) {
                j++;
                if(j >= nums.size()) return(i + 1);
            }
            nums[i+1] = nums[j];
        }
    }

int main() {
    vector<int> test;
    test.push_back(0);
    test.push_back(0);
    test.push_back(1);
    test.push_back(1);
    test.push_back(2);
    int res_len;
    res_len = removeDuplicates(test);
    cout << "result array has len = " << res_len << endl;
    return 0;
}
