class Solution {
public:
    int kthFactor(int n, int k) {
        for(int i = 1; i < sqrt(n); ++i) 
	if(n % i== 0 && --k == 0) 
		return i;                       
for(int i = (int) sqrt(n); i >= 1; --i) 
	if(n % (n/i) == 0 && --k == 0) 
		return n/i;          
return -1;
    }
};