class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; // handle empty vector case
        int index = 0; // index to track the position for unique elements
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[index] != nums[i]) {
                index++;
                nums[index] = nums[i]; // move unique element to the correct position
            }
        }
        
        return index + 1;

    }
};
