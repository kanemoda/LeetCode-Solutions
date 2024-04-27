class Solution {
public:
    int strStr(string haystack, string needle) {
         int hayLength = haystack.size();
        int targetLength = needle.size();

    for (int i = 0; i <= hayLength - targetLength; i++)
    {
        int done = 0;
        for (int j = 0; j < targetLength; j++)
        {
            if(needle[j] == haystack[i+j]){
                done++;
            }
            else{
                done = 0;
                break;
            }
        }

        if(done == targetLength){
            return i;
        }
        
    }

    return -1;

    }
};