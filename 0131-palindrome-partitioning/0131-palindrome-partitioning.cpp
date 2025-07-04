class Solution {
public:
   
      bool ispalindrome(string& s, int low , int high){
        while(low<high){
            if(s[low]!=s[high]){
                return false;
            }
            low++;
            high--;
        }
        return true;
      } 
      void func(string& s, int start, vector<string>& temp, vector<vector<string>>& result){
        if(start==s.size()){
            result.push_back(temp);
            return;
        }
        for(int i=  start;i<s.size();i++){
            //push only when it is pallindrome 
            if(ispalindrome(s,start,i)){
                // s[i] do char so use substring 
           temp.push_back(s.substr(start, i - start + 1)); 
            func(s,i+1,temp,result);
            temp.pop_back();
            }
        }
      } 
      
       vector<vector<string>> partition(string s) {
          vector<vector<string>> result;
        vector<string> temp;
        func(s, 0, temp, result);
        return result;
    }
};