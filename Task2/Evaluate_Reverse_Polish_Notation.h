class Solution {
public:
    int evalRPN(vector<string>& tokens) {//逆波兰...直接扫描就好，操作符可以之际操作，不需要中缀表达式那么复杂
        stack <int> s;
        for(int i=0;i<tokens.size();++i){
            if(tokens[i]=="+"){
                int a=s.top();s.pop();
                int b=s.top();s.pop();
                s.push(a+b);
            }
            else if(tokens[i]=="-"){
                int a=s.top();s.pop();
                int b=s.top();s.pop();
                s.push(b-a);
            }
            else if(tokens[i]=="*"){
                int a=s.top();s.pop();
                int b=s.top();s.pop();
                s.push(a*b);
            }
            else if(tokens[i]=="/"){
                int a=s.top();s.pop();
                int b=s.top();s.pop();
                s.push(b/a);
            }
            else s.push(stoi(tokens[i]));
        }
        return s.top();
    }
};