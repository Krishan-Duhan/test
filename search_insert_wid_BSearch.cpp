class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target <= nums[0]) return 0;
        else if(target > nums[nums.size() - 1]) return nums.size();
        int indx;
        indx = b_search(nums, target, 0, (nums.size() - 1));
        return indx;
    }

public:
    int b_search(vector<int>& nums, int s_val, int start, int end) {
        int mid = (start + end)/2;
        if(start >= end) {
            if(nums[mid] >= s_val) {
                return mid;
            }
            else {
                return (mid + 1);
            }
        }
        if(nums[mid] == s_val) {
            return mid;
        } else if(nums[mid] > s_val) {
            return(b_search(nums, s_val, start, mid - 1));
        } else {
            return(b_search(nums, s_val, mid + 1, end));
        }
    }
};
