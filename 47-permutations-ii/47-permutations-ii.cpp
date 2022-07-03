class Solution {
    void permuteRecursive(vector<int> &nums, int begin, vector<vector<int> > &result){
		if (begin >= nums.size()) {
		    result.push_back(nums);
		    return;
		}
		for (int i = begin; i < nums.size(); i++) {
		    swap(nums[begin], nums[i]);
		    permuteRecursive(nums, begin + 1, result);
		    swap(nums[begin], nums[i]);
		}
    }

public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
	    vector<vector<int> > result,result1;
	    permuteRecursive(nums, 0, result);
        sort(result.begin(),result.end());
        for(int i=0;i<result.size()-1;i++){
            if(result[i+1]!=result[i]){
                result1.push_back(result[i]);
            }
        }
        result1.push_back(result[result.size()-1]);
	    return result1;
    }
};