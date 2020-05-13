#include<bits/stdc++.h> 
using namespace std; 

bool check(int mid,int n,int m,int sk[],int ag[])
{
	if(mid>n or mid>m) return false;

	for(int i=0;i<mid;i++)
	{
		if(sk[i]<2*ag[mid-1-i]) return false;
	}
	return true;
}

int Maximum_Gaja(int n,int m,int sk[],int ag[]) 
{
	sort(sk,sk+n,greater<>());
	sort(ag,ag+m);
	int ans=0;
	int st=0,en=min(n,m);
	while(st<=en)
	{
		int mid=(st+en)/2;
		if(check(mid,n,m,sk,ag))
		{
			ans=mid;
			st=mid+1;
		}
		else en=mid-1;
	}
	return ans;
}

int32_t main() 
{   
    freopen("input4.txt", "r", stdin);
    freopen("output4.txt", "w", stdout);
        
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int sk[n];
        int ag[m];
        for(int i=0;i<n;i++) cin>>sk[i];
        for(int i=0;i<m;i++) cin>>ag[i];
        cout<<Maximum_Gaja(n,m,sk,ag)<<"\n";
        char ch;
        cin>>ch;
        cout<<"~\n";
    }
    return 0;
}