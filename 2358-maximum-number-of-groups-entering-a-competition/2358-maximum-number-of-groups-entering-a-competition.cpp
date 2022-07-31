class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int x=grades.size();
        for(int i=0;i<=grades.size();i++){
            if(((i*(i+1)) <= (2*x)) and ((i+1)*(i+2) > (2*x))){
                return i;
            }
        }
        return 0;
    }
};