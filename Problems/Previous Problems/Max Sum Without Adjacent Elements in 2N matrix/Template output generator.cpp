#include <bits/stdc++.h> 
using namespace std; 
#define int long long int
int n;
int dp[2][200005];
vector<vector<int> >A;
int fun(int x,int y)    //x row  , y column
{
    if(y>=::n) return 0;
    int&ret=dp[x][y];
    if(ret!=-1) return ret;
    ret=0;
    ret = A[x][y] + fun(0,y+2);
    ret=max(ret,A[x][y]+fun(1,y+2));
    ret=max(ret,fun(0,y+1));
    ret=max(ret,fun(1,y+1));
    return ret;
}


int max_sum(vector<vector<int>> Vec)
{
	::n=Vec[0].size();
    A=Vec;
    memset(dp,-1,sizeof(dp));
    return max(fun(0,0),fun(1,0));
}
int32_t main() 
{ 
	freopen("input4.txt", "r", stdin);
    freopen("output4.txt", "w", stdout);
	int t;
	cin>>t;
	int n;
	cin>>n;
    vector<vector<int>> Vec;
  	for(int i=0;i<2;i++)
  	{
  		vector<int>temp;
  		for(int j=0;j<n;j++)
  		{
  			int a;
  			cin>>a;
  			temp.push_back(a);
  		}
  		Vec.push_back(temp);
  	}
    
    cout<<max_sum(Vec)<<"\n";
    cout<<"~\n";
    return 0; 
} 