class Solution {
public:


    int orangesRotting(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        int fresh = 0;
        int rotten = 0;
        int ans = 0;
        queue<pair<int,int>>q;
        for(int i = 0;i<r;i++){
            for(int j = 0;j<c;j++){
                if(grid[i][j]==1){
                    fresh++;
                }else if(grid[i][j]==2){
                    rotten++;
                    q.push({i,j});
                }
            }
        }
        if(fresh==0)return 0;
        // take directions 0 1 2 3
        vector<int> dx = {0,0,1,-1};
        vector<int> dy = {1 ,-1,0,0};
        
        int min = 0; //min count
        while(q.size()>0){// till queue is not empty 
            int size = q.size();

            for(int i = 0;i<size;i++){ // when u know the queue size we have to tansverse each ele
                pair<int , int> node = q.front(); // take frst element
                    q.pop();// pop for next ele
                    // for four directions 
                    for ( int j = 0;j<4;j++){
                        // and node frst index + dx index 
                        int x = node.first+ dx[j]; // dont use  i use j here too remember this 
                        int y = node.second+dy[j];
                        //check if it is in boundary 
                        if(x>=0 && y>=0 && x<r&& y<c&& grid[x][y]==1){
                            // push also 
                            q.push({x,y});
                            grid[x][y] = 2;
                            fresh--;
                        }
                      
                    }
                   
            }
           if(q.size()>0)min++;
           if(!q.empty())ans++; 
        }
if(fresh==0)return min;
else return -1;
    }
};