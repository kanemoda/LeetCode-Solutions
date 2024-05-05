class Solution {
public:
    int reverse(int x) {

        try{
            bool isLower = false;
            if(x < 0){
                isLower = true;
            }
            string str = to_string(x);
            ::reverse(str.begin() , str.end());
            if(isLower){
                int res = stoi(str);
                res *= -1;
                return res;
            }
            else{
                return stoi(str);
            }
        }
        catch(const std::out_of_range& e){
            return 0;
        }
        
        
    }
};
