class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        /* vector<int> boat = {0};
        bool isDone = false;
        for(int i = 0 ; i < people.size() ; i++){
            isDone = false;
            for(int j = 0 ; j < boat.size() ; j++){
                if(people[i] <= limit - boat[j]){
                    boat[j] += people[i];
                    isDone = true;
                    break;
                }
            }
            if(!isDone){
                boat.push_back(people[i]);
            }
        }
        return boat.size(); */
        std::sort(people.begin(), people.end());
        int boatCount = 0;
        int left = 0, right = people.size() - 1;
        while (left <= right) {
            if (people[left] + people[right] <= limit) {
                left++;
            }
            right--;
            boatCount++;
        }
        return boatCount;
    }
};
