class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int>rarr(n ); 
        vector<int>carr( m );

        for( int i = 0 ;i<n;i++){
            for( int j = 0 ; j < m ; j++){
                if( matrix[i][j] == 0){
                    rarr[i] = 2 ;
                    carr[j] = 2 ; 
                }
            }
        }
        for ( int i = 0 ; i< n ;i++){
            for( int j = 0 ; j< m;j++){
                if(rarr[i]==2 || carr[j]==2){
                    matrix[i][j] = 0;
                }
            }
        }
     }
};