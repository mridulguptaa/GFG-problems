#include<bits/stdc++.h> 
using namespace std; 
long long int dp[105][105];
int fun(int i,int j,int n,int m,vector<vector<int> > &A)
{
    if(i>=n or j>=m) return 0;
    if(A[i][j]==1) return 0;
    if(i==n-1 && j==m-1) return 1;
    auto &it = dp[i][j];
    if(it!=-1) return it;
    it = 0;
    it+=fun(i+1,j,n,m,A);
    it+=fun(i,j+1,n,m,A);
    return it; 
}


int unique_paths(int n,int m,vector<vector<int>>A)
{
	memset(dp,-1,sizeof(dp));
	return fun(0,0,n,m,A);
}

int32_t main() 
{   
    freopen("input5.txt", "r", stdin);
    freopen("output5.txt", "w", stdout);
        
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int>>A;
        for(int i=0;i<n;i++)
        {
        	vector<int>temp;
        	int a;
        	for(int j=0;j<m;j++)
        	{
        		cin>>a;
        		temp.push_back(a);
        	}
        	A.push_back(temp);
        }
        cout<<unique_paths(n,m,A)<<"\n";
        char ch;
        cin>>ch;
        cout<<"~\n";
    }
    return 0;
}