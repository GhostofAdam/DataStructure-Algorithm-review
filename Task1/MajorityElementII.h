/*Majority Element II*/
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        int r1=0,r2=0,c1=0,c2=0;
        for(int i=0;i<nums.size();++i){
                if(nums[i]==r1) {++c1;continue;}
                if(nums[i]==r2) {++c2;continue;}
                if(c1==0) {r1=nums[i];++c1;continue;}
                if(c2==0) {r2=nums[i];++c2;continue;}
                --c1,--c2;
        }
        c1=c2=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==r1)++c1;
            else if(nums[i]==r2)++c2;
        }
        int tmp=nums.size()/3;
        if(c1>tmp) res.push_back(r1);
        if(c2>tmp) res.push_back(r2);
        return res;
    }
};