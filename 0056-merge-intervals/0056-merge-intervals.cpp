class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       vector<vector<int>>result ; 
       // frst sort 
       sort(intervals.begin(), intervals.end());
       // start with frst interval
       vector<int> current = intervals[0];
       // transverse the second interval 
       for( int i = 1 ; i< intervals.size();++i){
        // if current interval overlaps with next one 
        if(current[1]>= intervals[i][0]){
            current[1] = max(current[1], intervals[i][1]);
        }else{
            result.push_back(current);
            current = intervals[i];
        }
       }
       result.push_back(current);
       return result; 
    }
};