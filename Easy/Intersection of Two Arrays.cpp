class Solution {
public:
     bool contains(vector<int>& vec, int num) {
        for (int i = 0; i < vec.size(); i++) {
            if (num == vec[i]) {
                return true;
            }
        }
        return false;
    }
    
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for(int i = 0; i < nums1.size() ; i++){
            for(int j = 0 ; j < nums2.size() ; j++){
                if (nums1[i] == nums2[j] && !contains(result, nums1[i])) {
                    result.push_back(nums1[i]);
                    break;
                }
            }
        }
        return result;
    }
};
