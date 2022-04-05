class Solution {
public:
    double angleClock(int hour, int minutes) {
        
        double hour_time=(60.0*(double)hour+(double)minutes)*0.5;
        double minute_time=(double)(minutes)*6.0;
        
        double val=abs(hour_time-minute_time);
        return  min(360.0-val,val);
        
    }
};