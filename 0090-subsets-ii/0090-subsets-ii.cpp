class Solution {
public:
    set<vector<int>>s;
    void f( vector<int>& nums,vector<int>&arr, int index, int n){
        if(index==n){
            s.insert({arr});
            return;
        }
        arr.push_back(nums[index]);
        f( nums,arr,index+1,n);
        arr.pop_back();
        f( nums,arr,index+1,n);
        

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> arr;
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        f(nums, arr,0, nums.size());
        for(auto it:s){
            ans.push_back(it);
            }
    return ans;
    }
};