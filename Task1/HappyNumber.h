/* Happy Number*/
class Solution {
public:
    int square_sum(int n){
        int res=0;
        while(n){
            int t=n%10;
            res+=t*t;
            n=n/10;
        }
        return res;
    }
    bool isHappy(int n) {
        unordered_map<int,int>myhash;
        while(!myhash.count(n)){
            if(n==1) return true;
            myhash[n]=n;
            n=square_sum(n);
        }
        return false;
    }
};