class Solution {
public:
    void DFS(vector<vector<char>> &mat , int i , int j , int r, int c){
        if(i==r || j == c || i<0 || j<0 || mat[i][j]=='0'){
            return ; 
        }
        mat[i][j] = '0';
        DFS(mat,i,j+1,r,c);
        DFS(mat,i-1,j,r,c);
        DFS(mat,i,j-1,r,c);
        DFS(mat,i+1,j,r,c);
    }
    int numIslands(vector<vector<char>>& grid) {
        int r = grid.size();
        int  c = grid[0].size(); // take size of matrix 
        int ans = 0; // for count no of islands 
        for(int i = 0 ;i<r;i++){
            for(int j = 0 ; j < c ; j++){
                if(grid[i][j] == '1'){     //transeverse when it is only 1 
                    DFS(grid , i , j , r, c);
                    ans++;    // and make interally 0 so that not visited again the nodes 
                }
            }
        }
        return ans;
    }
};