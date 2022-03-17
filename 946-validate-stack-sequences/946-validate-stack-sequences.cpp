class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> stack;
        int i = 0;
        for (int j=0;j<pushed.size();j++) {
            stack.push(pushed[j]);
            while (stack.size() && stack.top() == popped[i]) {
                stack.pop();
                i++;
            }
        }
        return stack.size() == 0;
    }
};