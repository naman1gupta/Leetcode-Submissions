class Solution {
public:
    bool isPowerOfThree(int n) {
        while(true){
            if(n==1){
                return true;
            }
            if((n!=1 and n%3!=0) or (n==0)){
                return false;
            }
            n=n/3;
        }
    }
};