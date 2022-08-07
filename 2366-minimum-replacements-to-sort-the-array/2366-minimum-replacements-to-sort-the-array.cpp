class Solution {
public:
	long long minimumReplacement(vector<int>& nums) {
		int n = nums.size();
		long long ct = 0;
        int prev = nums[n - 1];
		for (int i = n - 2; i >= 0; --i) {
            int step = nums[i]/ prev;
            if(nums[i] % prev){
                step++;
                prev = nums[i]/ step;
            }
            cout<<step<<endl;
            ct += step -1;
		}
		return ct;
	}
};