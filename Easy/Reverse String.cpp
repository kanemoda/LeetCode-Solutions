class Solution {
public:
    void reverseString(vector<char>& s) {
        int length = s.size();
        int usableLength = length - 1;
        char tmp;
        for(int i = 0 ; i < length / 2 ; i++){
            tmp = s[i];
            s[i] = s[usableLength - i];
            s[usableLength - i] = tmp;
        }

        for(int i = 0 ; i < length ; i++){
            cout << s[i];
        }
    }
};
