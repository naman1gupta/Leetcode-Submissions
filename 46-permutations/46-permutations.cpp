class Solution {
    
    void permuteRecursive(vector<int> &nums, int begin, vector<vector<int> > &result)	{
		if (begin >= nums.size()) {
		    // one permutation instance
		    result.push_back(nums);
		    return;
		}
		
		for (int i = begin; i < nums.size(); i++) {
		    swap(nums[begin], nums[i]);
		    permuteRecursive(nums, begin + 1, result);
		    // reset
		    swap(nums[begin], nums[i]);
		}
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
	    permuteRecursive(nums, 0, result);
	    return result;
    }
};