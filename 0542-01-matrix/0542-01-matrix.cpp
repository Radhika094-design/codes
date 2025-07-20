class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();
        int one = 0;
        int zero = 0;
        queue<pair<int,int>>q;
        for(int i = 0;i<r;i++){
            for(int j = 0;j<c;j++){
                if(mat[i][j]==0){
                    zero++;
                    q.push({i,j});
                }else{
                    one++;
                    mat[i][j] = -1 ;
                }
            }
        }
        if(one==0) return mat;
        vector<int>dx = {0,0,1,-1};
        vector<int>dy = {1,-1,0,0};
        while(q.size()>0){
            int min = 0;
            int size = q.size();
            for(int i = 0 ;i<size;i++){
                pair<int,int> node = q.front();
                q.pop();
                for(int j = 0;j<4;j++){
                    int x = node.first+dx[j];
                    int y = node.second+dy[j];

                    if(x>=0&&y>=0&&x<r && y<c && mat[x][y]== - 1){
                        if(mat[x][y]= 1+ mat[node.first][node.second]){
                            q.push({x,y});
                        }
                    }
                }
            }
                if(q.size()>0)min++;
            }
            return mat;
        
    }
};