class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int length = nums.size();
        int sum = 0;
        for(int i = 0 ; i < length ; i++){
            sum += nums[i];
        }
        return ((length * (length + 1)) / 2) - sum;
    }
};
