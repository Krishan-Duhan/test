//Function to remove all instances of a given value from a given vector/array & return resulting length
    int removeElement(vector<int>& nums, int val) {
        if(nums.empty()) return 0;
        int i = 0,j = 0;
        while(j < nums.size() && i < nums.size()){
            if(nums[i] == val) {
                j = i;
                //if(j >= nums.size()) return i;
                while(nums[j] == val) {
                    j++;
                    if(j >= nums.size()) return i;
                }
                swap(nums[i],nums[j]);
                i++;
            } else {
                i++;
            }
        }
        return i;
    }
