class Solution {
public:
    int minOperations(int n) {
        int res = 0;
        for (int i = 0; i < 14; ++i)
            if (__builtin_popcount(n + (1 << i)) < __builtin_popcount(n)) {
                n += 1 << i;
                ++res;
            }
        return res + __builtin_popcount(n);    }
};