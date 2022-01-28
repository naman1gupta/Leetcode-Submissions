class Solution {
public:
    int mySqrt(int x) {
        long long xx;
        if(x==0){
            return 0;
        }
        else if(x==1){
            return 1;
        }
        else{
            for(long long i=1;i<=x;i++){
                if(i*i >x){
                    xx= i-1;
                    break;
                }
            }
            return xx;
        }
    }
};