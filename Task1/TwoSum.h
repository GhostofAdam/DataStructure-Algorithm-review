/*Two Sum*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        unordered_map<int,int>myhash;
        for(int i=0;i<nums.size();i++){
            myhash[target-nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            if(myhash.count(nums[i])&&myhash[nums[i]]!=i){
                res.push_back(myhash[nums[i]]);
                res.push_back(i);
                return res;
            }   
    }
        return res;
}
};