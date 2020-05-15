int n;
int dp[2][200005];
vector<vector<int> >A;
int fun(int x,int y)    //x row  , y column
{
    if(y>=n) return 0;
    int&ret=dp[x][y];
    if(ret!=-1) return ret;
    ret=0;
    ret = A[x][y] + fun(0,y+2);
    ret=max(ret,A[x][y]+fun(1,y+2));
    ret=max(ret,fun(0,y+1));
    ret=max(ret,fun(1,y+1));
    return ret;
}

int Solution::adjacent(vector<vector<int> > &A) {
    n=A[0].size();
    ::A=A;
    memset(dp,-1,sizeof(dp));
    return max(fun(0,0),fun(1,0));
}
