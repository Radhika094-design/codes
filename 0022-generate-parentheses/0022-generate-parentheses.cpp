class Solution {
public:
   
      void func(int open , int close , int n , string curr, vector<string >&result) {
        if(curr.length()==2* n ){
            result.push_back(curr);
            return ; 
        }
        if(open<n){
            func(open+1,close, n ,curr+"(",result);
        }
        if(close<open){
            func(open,close+1,n ,curr+")",result);
        }
      } 
       vector<string> generateParenthesis(int n) {
         vector<string> result;
        func(0, 0, n, "", result);
        return result;
    }
};