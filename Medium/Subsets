class Solution {
    void findingSubsetsVector(const vector<int> &input, vector<int> &output, int i, vector<vector<int>> &res) {
    // Base case
    if (i == input.size()) {
        res.push_back(output);
        return;
    }

    // Recursive case
    // Include the ith element
    output.push_back(input[i]);
    findingSubsetsVector(input, output, i + 1, res);
    output.pop_back(); // Exclude the ith element

    // Exclude the ith element
    findingSubsetsVector(input, output, i + 1, res);
}
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> output;
        findingSubsetsVector(nums, output , 0 ,res);
        return res;
    }
};
