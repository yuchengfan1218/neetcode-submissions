class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool answer = false;
        vector<int> stack;
        sort(nums.begin(), nums.end(), [](auto&a,auto&b){
            return a<b;
        });
        for(int i = 0; i<nums.size(); i++){
            if(i == 0){
                stack.push_back(nums[i]);
            }
            else{
                if(nums[i] == stack[i-1]){
                    answer = true;
                    return answer;
                }
                else{
                    stack.push_back(nums[i]);
                }
            }
        }
        return answer;
    }
};