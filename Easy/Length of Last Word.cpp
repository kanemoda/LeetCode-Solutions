class Solution {
public:
    int lengthOfLastWord(string s) {
        bool isSpace = false;
        int index = 0;
        int wordCount = 0;
        while(s[index] != '\0'){

            if(s[index] == ' '){
                isSpace = true;
            }

            if(isSpace && isalpha(s[index])){
                isSpace = false;
                wordCount = 0;
            }

            if(isalpha(s[index]) && !isSpace){
                wordCount++;
            }

            index++;
        }
        return wordCount;
    }
};
