class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        for(int i=0;i<row-1;i++){
          for(int j=i+1;j<col;j++){
              swap(matrix[i][j],matrix[j][i]);
          }
        }
        for(int i=0;i<row;i++){
          reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};