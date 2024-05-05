class Solution {
public:

    bool isVovel(char c) {
    // Convert the character to lowercase for case-insensitive comparison
    c = tolower(c);
    
    // Check if the character is a vowel
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
    string reverseVowels(string s) {
        int leftVovelIndex = 0;
        int rightVovelIndex = s.size()  - 1;
        char tmp;
        



        while(leftVovelIndex < rightVovelIndex){
            if(isVovel(s[leftVovelIndex]) && isVovel(s[rightVovelIndex])){
                tmp = s[leftVovelIndex];
                s[leftVovelIndex] = s[rightVovelIndex];
                s[rightVovelIndex] = tmp;
                leftVovelIndex++;
                rightVovelIndex--;
            }
            else if(isVovel(s[leftVovelIndex]) && !isVovel(s[rightVovelIndex])){
                rightVovelIndex--;
            }
            else if(!isVovel(s[leftVovelIndex]) && isVovel(s[rightVovelIndex])){
                leftVovelIndex++;
            }
            else{
                leftVovelIndex++;
                rightVovelIndex--;
            }
        }
        return s;
    }
};
