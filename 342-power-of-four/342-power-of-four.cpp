class Solution {
public:
    bool isPowerOfFour(int n) {
        while(true){
            if(n==1){
                return true;
            }
            if((n!=1 and n%4!=0) or (n==0)){
                return false;
            }
            n=n/4;
        }
    }
};