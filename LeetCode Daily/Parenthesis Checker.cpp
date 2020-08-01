/*Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Note that an empty string is also considered valid.*/


class Solution {
public:
    bool isValid(string s) {
        stack <int> st;
        char t;
        for(int i = 0; i<s.length(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
                continue;
            }
            
            if( st.empty())
                return false;
                
            else{
                if(s[i] == ')'){
                    t = st.top();
                    st.pop();
                    if(t == '[' || t == '{')
                        return false;
                }
                else if(s[i] == ']'){
                    t = st.top();
                    st.pop();
                    if(t == '(' || t == '{')
                        return false;
                }
                else if(s[i] == '}'){
                    t = st.top();
                    st.pop();
                    if(t == '[' || t == '(')
                        return false;
                }
            }
        }
        return (st.empty());
    }
};
