class Solution {
public:
    int mySqrt(int x) {
        long r=x;
        x=long(x);
        while(r*r>x){
            r=(r+x/r)/2;
        }
        return r;
    }
};