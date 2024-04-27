class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool done = false;
        int length = digits.size();
        int check_pointer = length - 1;
        if(length == 0){
            digits[length - 1] = 1;
            return digits;
        }
        if(digits[length - 1] != 9){
            digits[length - 1] += 1;
            return digits;
        }
        else{
            while(digits[check_pointer] == 9 && check_pointer > 0){
                digits[check_pointer] = 0;
                check_pointer--;
                done = true;
            }
            if(done && digits[check_pointer] != 9){
                digits[check_pointer]+= 1;
            }
            else if(check_pointer == 0 && digits[check_pointer] == 9){
                digits[check_pointer] = 0;
                digits.insert(digits.begin() , 1);
                    
                
            }
            return digits;
        }

    }
};