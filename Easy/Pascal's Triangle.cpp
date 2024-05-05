class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int i = 0 ; i < numRows ; i++){
            vector<int> row(i + 1, 1); // Create a vector with i + 1 elements, all initialized to 1
            for (int j = 1; j < i; j++) { // Update elements except the first and last
                row[j] = res[i - 1][j - 1] + res[i - 1][j];
            }
            res.push_back(row); // Push the row to the result vector
        }
        return res;
    }
};
