class Solution {
public:
    bool isPerfectSquare(int num) {
        int left = 0;
        int right = num;

        while(left <= right){
            long int mid = left + (right - left) / 2;

            //Check if ensure
            if(mid * mid == num){
                return true;
            }

            // If target is greater, ignore left half
            if(mid * mid < num){
                left = mid + 1;
            }

            // If target is smaller, ignore right half
            else{
                right = mid -1;
            }

        }
        return false;
    }
};
