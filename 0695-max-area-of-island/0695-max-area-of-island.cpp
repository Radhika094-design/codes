class Solution {
public:
    void DFS(vector<vector<int>> &mat , int i , int j , int r, int c , int &temp){
        if(i==r || j == c || i<0 || j<0 || mat[i][j]==0){
            return ; 
        }
        temp++; // to check how many times recursion calls 
        mat[i][j] = 0; // mark as visited 
        DFS(mat,i,j+1,r,c,temp);
        DFS(mat,i-1,j,r,c,temp);
        DFS(mat,i,j-1,r,c,temp);
        DFS(mat,i+1,j,r,c,temp);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r = grid.size();
        int  c = grid[0].size(); // take size of matrix 
        int ans = 0; // for count no of islands 
       
        for(int i = 0 ;i<r;i++){
            for(int j = 0 ; j < c ; j++){
                if(grid[i][j] == 1){ 
                     int temp = 0;    //transeverse when it is only 1 
                    DFS(grid , i , j , r, c,temp);
                   // ans++;    // and make interally 0 so that not visited again the nodes 
                   ans = max(ans,temp);
                }
            }
        }
        return ans;
    }
};
   
