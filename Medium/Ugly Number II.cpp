class Solution {
public:
    int nthUglyNumber(int n) {
        if(n <= 0){
            return 0;
        }

        vector<int> uglyNumbers(n);
        uglyNumbers[0] = 1;

        int nextUglyIndex = 1;
        int p2 = 0 , p3 = 0 , p5 = 0;

        while(nextUglyIndex < n){
            int nextUgly = min({uglyNumbers[p2] * 2 , uglyNumbers[p3] * 3 , uglyNumbers[p5] * 5});

            uglyNumbers[nextUglyIndex] = nextUgly;

            while(uglyNumbers[p2] * 2 <= nextUgly) p2++;
            while(uglyNumbers[p3] * 3 <= nextUgly) p3++;
            while(uglyNumbers[p5] * 5 <= nextUgly) p5++;

            nextUglyIndex++;
        }
        return uglyNumbers[n-1];
    }
};
