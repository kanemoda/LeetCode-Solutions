class Solution {
public:

    double findMaxAverage(vector<int>& nums, int k) {
        //find the sum for first tiem for k elements
        double sum = 0;
        for(int i = 0 ; i < k ; i++){
            sum += nums[i];
        }
        double max = sum;

        //Code for sliding window :)
        for (int i = k; i < nums.size() ; i++){
            sum += nums[i] - nums[i - k];
            if(max < sum){
                max = sum;
            }
        }
        return max / k;
        
    }
};
