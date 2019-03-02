//全排列 就按LeetCode的格式写吧
//no duplicates
struct Data{
    vector<int> array;
    int i;
    Data(vector<int>& a,int x):array(a),i(x){}//a[i]之前是已经确定的排列 a[i]之后是需要继续求解排列情况的数的集合
};
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {//基本思路 长度为的全排列 等于枚举每个元素位于首位 其他元素在其后全排列的集合
        vector<vector<int>>res;
        stack<Data> stack;//栈
        for(int i=0;i<nums.size();++i){
            vector<int> tmp(nums);
            swap(tmp[0],tmp[i]);
            Data d(tmp,0);
            stack.push(d);
        }//
        while(!stack.empty()){//栈若空 无待处理的排列情况
            Data t=stack.top();
            stack.pop();
            if(t.i==nums.size()-1) res.push_back(t.array);//如果出栈的Data是一个确定的排列，没有继续求解的部分 则添加到结果
            else{//否则，在需要求解的部分中，枚举每个元素位于首位压入栈中
                for(int j=t.i+1;j<nums.size();++j){
                    vector<int> tmp(t.array);
                    swap(tmp[t.i+1],tmp[j]);
                    Data d(tmp,t.i+1);
                    stack.push(d);
                }
            }
        }
        return res;
    }
};

//containing duplicates
//
