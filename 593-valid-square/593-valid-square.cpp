class Solution {
public:
    int calculate_distance_square(vector<int> x, vector<int> y){
        //distance between (x1,x2) and (y1,y2) is (x2-x1)^2 + (y2-y1)^2
        return pow(y[0]-x[0],2)+ pow(y[1]-x[1],2);
        
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        unordered_set<int> s;
        s.insert(calculate_distance_square(p1,p2));
        s.insert(calculate_distance_square(p1,p3));
        s.insert(calculate_distance_square(p1,p4));
        s.insert(calculate_distance_square(p2,p3));
        s.insert(calculate_distance_square(p2,p4));
        s.insert(calculate_distance_square(p3,p4));
        if(s.count(0)==true) //Any distance is zero
            return false;
        if(s.size()!=2)
            return false;
        //check rhombus and square diff
        auto it=s.begin();
        auto it2=++s.begin();
        
        if(2*(*it)==*it2 || 2*(*it2)==*it)
            return true;
        return false;
    }
};