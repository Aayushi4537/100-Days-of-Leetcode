class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int ans = INT_MIN;
        int count = 0;
        int n=nums.size();

        for(int i = 0; i < n; i++) {
            if(nums[i] == 1){
                count++;
                ans = max(ans, count);
            } else {
                count = 0;
            }
        }

        if(ans == INT_MIN)
            return 0;
        else
            return ans;
        
    }
};