class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int length1 = word1.size() - 1;
        int length2 = word2.size() - 1; 
        int i = 0;
        string res = "";
        int p1 = 0, p2 = 0;
        while(p1 <= length1 || p2 <= length2){
            if(p1 <= length1){
                res += word1[p1];
                p1++;
                i++;
            }
            if(p2 <= length2){
                res += word2[p2];
                p2++;
                i++;
            }
        }
        return res;

    }
};
