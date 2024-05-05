class Solution {
public:
    int climbStairs(int n, vector<int>& memo) {
    // Base cases
    if (n <= 1) {
        return 1;
    }

    // Check if the result is already computed
    if (memo[n] != -1) {
        return memo[n];
    }

    // Recursively compute and store the result
    memo[n] = climbStairs(n - 1, memo) + climbStairs(n - 2, memo);
    return memo[n];
    }

    int climbStairs(int n) {
        // Initialize memoization array with -1
        vector<int> memo(n + 1, -1);
        return climbStairs(n, memo);
    }     

};
