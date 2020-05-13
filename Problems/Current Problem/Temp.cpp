int m,n;
int dp[105][105];
int fun(int i,int j,vector<vector<int> > &A)
{
    if(i>=n or j>=m) return 0;
    if(A[i][j]==1) return 0;
    if(i==n-1 && j==m-1) return 1;
    
    auto &it = dp[i][j];
    if(it!=-1) return it;
    it = 0;
    
    it+=fun(i+1,j,A);
    it+=fun(i,j+1,A);
    return it; 
}
 
 
int Solution::uniquePathsWithObstacles(vector<vector<int> > &A) {
     n =A.size();
     m=A[0].size();
     memset(dp,-1,sizeof(dp));
     
     return fun(0,0,A);
}