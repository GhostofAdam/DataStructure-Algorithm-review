class Solution {
public:
    bool match(char a,char b){
        return (a=='('&&b==')')||(a=='['&&b==']')||(a=='{'&&b=='}');
    }
    bool isValid(string s) {
        stack<char> stack;
        for(int i=0;i<s.length();++i){//遇到左括号入栈 如果右括号匹配则出栈，右括号无法匹配可直接返回false，我这里只是将右括号入栈，最后返回栈是否为空
            if(stack.empty()||!match(stack.top(),s.at(i))) stack.push(s.at(i));
            else stack.pop();
        }
        return stack.empty();
    }
};