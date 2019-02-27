/*First Missing Positive*/
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int> n(nums.size()+2);
        for(int i=0;i<nums.size();++i){
            if(nums[i]>0&&nums[i]<=nums.size())
                n[nums[i]]=nums[i];
        }
        for(int i=1;i<n.size();++i){
            if(n[i]!=i)
                return i;
        }
        return 1;
    }
};