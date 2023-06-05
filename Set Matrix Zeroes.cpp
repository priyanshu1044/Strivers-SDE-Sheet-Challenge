class Solution {
public:
    //optimal code
    void setZeroes(vector<vector<int>>& matrix) {
        
    }
    
    
//     //better code
//     void setZeroes(vector<vector<int>>& matrix) {
//         int m=matrix.size();
//         int n= matrix[0].size();
//         vector<int> row(m,0);
//         vector<int> col(n, 0);
//         for (int i = 0; i < m; i++)
//         {
//             for (int j = 0; j <n; j++)
//             {
//                 if (matrix[i][j]==0)
//                 {
//                     row[i]=1;
//                     col[j]=1; 
//                 }
                
//             }
            
//         }
//         for (int i = 0; i < m; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 if(row[i]||col[j]){
//                     matrix[i][j]=0;
//                 }
//             }
            
//         }
        
        
//     }

//     //bruteForce
//     void markRow(vector<vector<int>>& matrix,int row,int m){
//         for (int j = 0; j < m; j++)
//         {
//             if(matrix[row][j]!=0){
//                 matrix[row][j]=-1;
//             }
//         }
        
//     }
//     void markCol(vector<vector<int>>& matrix,int col,int n){
//         for (int i = 0; i < n; i++)
//         {
//             if(matrix[i][col]!=0){
//                 matrix[i][col]=-1;
//             }
//         }
        
//     }
//     void setZeroes(vector<vector<int>>& matrix) {
//         int n=matrix.size();
//         int m= matrix[0].size();
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 if(matrix[i][j]==0){
//                     markRow(matrix,i,m);
//                     markCol(matrix,j,n);
//                 }
//             }
            
//         }
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 if(matrix[i][j]==-1){
//                     matrix[i][j]=0;
//                 }
//             }
            
//         }
        
//         return;
        
//     }
};