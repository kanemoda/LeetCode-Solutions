class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = s.length() - 1;
        int lastIndex = t.length() - 1;
        int startingIndex = 0;
        int counter = 0;
        if (s.length() == 0){
            return true;
        }
        if(s.length() == 1){
            for(int a = 0; a < t.length() ; a++){
                if(s[0] == t[a]){
                    return true;
                }
            }
            return false;
        }
        while (startingIndex < lastIndex && counter != s.length() ){
            if(s[i] == t[startingIndex]){
                counter++;
                i++;
            }
            startingIndex++;
            if(s[j] == t[lastIndex]){
                counter++;
                j--;
            }
            
            lastIndex--;
        }
        if(counter >= s.length()){
            return true;
        }
        else{
            return false;
        }
    }
};
