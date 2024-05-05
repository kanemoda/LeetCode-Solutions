class Solution {
public:

/*     int oneCounter(int num){
        int zeroCount = 0;
        string binary;
        while(num > 0){
            binary = to_string(num % 2) + binary;
            num /= 2;
        }

        if(binary.empty()){
            return 0;
        }

        for(int i = 0 ; i  < binary.length() ; i++){
            if(binary[i] == '1'){
                zeroCount++;
            }
        }

        return zeroCount;
    }

    vector<int> countBits(int n) {
        vector<int> result(n+1);
        for(int i = 0 ; i < n + 1 ; i++){
            result[i] = oneCounter(i);
        }

        return result;
    } */

    int countOnes(int num) {
    int count = 0;
    while (num > 0) {
        count += num & 1;
        num >>= 1;
    }
    return count;
    }

     vector<int> countBits(int n) {
        vector<int> result(n + 1);
        for (int i = 0; i <= n; ++i) {
            result[i] = countOnes(i);
        }
        return result;
    }

};
