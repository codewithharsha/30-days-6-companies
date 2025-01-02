class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        x1 -= xCenter,x2 -= xCenter,y1 -= yCenter,y2 -= yCenter;
        int miniX,miniY;
        if(x1*x2 > 0){
            miniX = min(x1*x1,x2*x2);
        }
        else{
            miniX = 0;
        }

        if(y1*y2 > 0){
            miniY = min(y1*y1,y2*y2);
        }
        else{
            miniY = 0;
        }

        return miniX+miniY <= radius*radius;
    }
};
