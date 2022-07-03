class Solution {
     void backtrack(string &s, int i, vector<string> &ans) {
        if (i == s.size()) {
            ans.push_back(s);
            return;
        }
        char c = s[i];
        s[i] = islower(c) ? toupper(c) : tolower(c);
        backtrack(s, i + 1, ans);
        if ((c>='a' and c<='z') or (c>='A' and c<='Z')) {
            s[i] = c;
            backtrack(s, i + 1, ans);
        }
    }
public: 
    vector<string> letterCasePermutation(string S) {
        vector<string> ans;
        backtrack(S, 0, ans);
        return ans;
    }
    
};