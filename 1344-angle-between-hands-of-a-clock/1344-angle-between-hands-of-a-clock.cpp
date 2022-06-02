class Solution {
public:
    double angleClock(int hour, int minutes) {
        long double x = ((hour%12)*30)+((minutes*30*1.0)/(1.0*60));
        long double y = minutes*6;
        return min(abs(x-y),360-abs(x-y));
    }
};