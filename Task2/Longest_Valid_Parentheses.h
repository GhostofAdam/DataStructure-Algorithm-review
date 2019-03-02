class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>stack;
        int flag=0,max=0;//flag当前匹配的括号长度的起点 max当前最长长度
        for(int i=0;i<s.length();++i){
            if(s.at(i)=='(') stack.push(i);//左括号入栈
            else{
                if(stack.empty()) flag=i+1;//无左括号匹配 则从一下一位作为起点
                else{
                    int t=stack.top();
                    stack.pop();//出栈 与右括号匹配 当前匹配增长
                    if(stack.empty()) max=max>i-flag+1?max:i-flag+1;//当前匹配已探测到最长，与max比较
                    else max=max>i-stack.top()?max:i-stack.top();//当前匹配增长，与max比较
                }
            }
        }
        return max;
    }
};