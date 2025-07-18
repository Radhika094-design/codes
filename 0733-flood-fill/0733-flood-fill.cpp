class Solution {
public:
void DFS(vector<vector<int>>& mat, int i , int j , int r , int c , int newcolor , int oldcolor){
    if(i==r|| j ==c||i<0||j<0||mat[i][j]!= oldcolor || mat[i][j]== newcolor){
        return;
    }
    mat[i][j] = newcolor;
    DFS(mat, i, j + 1, r, c,newcolor,oldcolor);
    DFS(mat, i - 1, j, r, c,newcolor,oldcolor);
    DFS(mat, i, j - 1, r, c,newcolor,oldcolor);
    DFS(mat, i + 1, j, r, c,newcolor,oldcolor);
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int r = image.size();
        int c = image[0].size();
        int oldcolor = image[sr][sc];
        DFS(image, sr,sc,r,c,color,oldcolor);
    
    return image;
}
};