class Solution {
// recursive function which contains index
// when index reaches the end -> push it in ans
// when I am at an index -> 2 choices take and not take
// take -> push the item in cs move to index + 1, when out of recursion pop it from current state 
// then I go to index + 1


public:
    vector<vector<int>> ans;
    void generate(int index, vector<int> &nums, vector<int> &cs){
        if(index == nums.size()){
            ans.push_back(cs);
            return;
        }
        cs.push_back(nums[index]);
        generate(index+1, nums, cs);
        cs.pop_back();
        generate(index+1, nums, cs);
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> cs;
        generate(0, nums,cs);
        return ans;
    }
};