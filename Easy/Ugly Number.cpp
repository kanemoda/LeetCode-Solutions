class Solution {
public:
    bool isUgly(int n) {
        if(n <= 0){
            return false;
        }
        bool provided = true;
        while(provided){
            provided = false;

            if(n % 2 == 0){
                n = n / 2;
                provided = true;
            }
            if(n % 3 == 0){
                n = n / 3;
                provided = true;
            }
            if(n % 5 == 0){
                n = n / 5;
                provided = true;
            }
        }
        if(n == 1){
            return true;
        }
        else{
            return false;
        }
    }
};
