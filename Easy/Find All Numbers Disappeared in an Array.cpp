class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> occur;
        vector<int> result;
        sort(nums.begin() , nums.end());
        int length = nums.size();
        int tmp = 0;
        int tmpLast = 0;

        for(int i = 0 ; i < length ; i++){
            if(nums[i] != tmpLast){
                tmpLast = nums[i];
                occur.push_back(nums[i]);
            }
        }

        occur.push_back(0);

        for(int i = 1 ; i <= length ; i++){
            if(i == occur[tmp]){
                tmp++;
            }
            else{
                result.push_back(i);
            }
        }
        return result;
    }
};
