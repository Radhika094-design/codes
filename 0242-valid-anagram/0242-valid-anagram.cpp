class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> map;
        if(s.size()!= t.size()) return false ; 
        for( int num: s){
            map[num]++;
        }
        for( int num: t){
            map[num]--;
        }
        for(int num: t){
            if(map[num]<0){
                return false; 
            }
        }
        return true ; 
    }
    
};