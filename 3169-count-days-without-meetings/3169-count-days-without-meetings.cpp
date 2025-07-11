class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
       
int res = 0, maxEnd = 0;
sort(meetings.begin(), meetings.end());
for (vector<int>& last : meetings) {
int start = last[0], end = last[1];
if (start > maxEnd + 1)
res += (start - maxEnd - 1);
maxEnd = max(end, maxEnd);
}
if (maxEnd < days)
res += days - maxEnd;
return res;
}
    
};