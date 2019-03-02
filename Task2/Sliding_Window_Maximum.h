class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>res;
        deque<int> s;//主要需要维护当前窗口最大值的位置，已经当它离开窗口时，继任者的位置
					//用双向队列实现
					//front模拟窗口前移，back储存继任者（最大值之后的值才有可能成为继任者）
        for(int i=0;i<nums.size();++i){
            while(!s.empty()&&nums[s.back()]<nums[i]) s.pop_back();//nums[i]入栈，前面比它小的值，将不再成为最大值和它本身的继任者，出栈
            s.push_back(i);
            if(i>=k-1){
                if(i-k+1>s.front()) s.pop_front();//窗口前移越过了最大值，则最大值出栈
                res.push_back(nums[s.front()]);
            }
        }
        return res;
    }
};