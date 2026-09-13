class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        bool zeroinFirstCol=false;
        for(int row=0;row<mat.size();row++){
            if(mat[row][0]==0){
                zeroinFirstCol=true;
            }
            for(int col=1;col<mat[0].size();col++){
                if(mat[row][col]==0){
                    mat[row][0]=0;
                    mat[0][col]=0;
                }
            } 
        }
        for(int row=mat.size()-1;row>=0;row--){
            for(int col=mat[0].size()-1;col>0;col--){
                if(mat[row][0]==0 || mat[0][col]==0){
                    mat[row][col]=0;
                }
            }
            if(zeroinFirstCol){
                mat[row][0]=0;
            }
        }
    }
};