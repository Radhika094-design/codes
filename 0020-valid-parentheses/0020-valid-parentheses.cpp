class Solution {
public:
    bool isValid(string s) {
        stack<char> st ; 
        for( int i = 0;i<s.size();i++){
            char c = s[i];
            // push opening bracket into stack 
            if( c =='('|| c=='{'|| c=='['){
                st.push(c);   
            }else{
                if(st.empty())return false ; 
            
             char top = st.top();
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                    }
                    st.pop();
        }
        }
       return st.empty();
    }
};