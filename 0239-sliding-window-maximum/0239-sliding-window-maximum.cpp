class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int>S;
        int n=nums.size();
        for(int i=0;i<k;i++) S.insert(nums[i]);  // inserting first k elements
        vector<int>v;
        v.push_back(*S.rbegin());  //max element of set
        for(int i=k;i<n;i++)
        {
            S.erase(S.find(nums[i-k]));   //use set.find as it erases only first occurance of element
            S.insert(nums[i]);
            v.push_back(*S.rbegin());
        }
        return v;
    }
};