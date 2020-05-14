#include<bits/stdc++.h> 
using namespace std; 


vector<int> solve(int A,vector<int>B)
{
	auto it=*min_element(B.begin(),B.end());
    int mtime = A/it;
    int pp=mtime;
    vector<int>ans;
    int taken=0;
    
    int ptr=0;
    auto n=min_element(B.begin(),B.end())-B.begin();

    while(ptr<n && ans.size()<pp)
    {
        if(A-taken-mtime*it<0)
        {
            ptr++; continue;
        }
        int temp = (A-taken-mtime*it)/(B[ptr]-it);
        mtime-=temp;
        taken+=B[ptr]*temp;
        while(temp-- && ans.size()<pp) ans.push_back(ptr);
        ptr++;
    }
    while(ans.size()< pp) ans.push_back(n);
    return ans;
}

int32_t main() 
{   
    freopen("input5.txt", "r", stdin);
    freopen("output5.txt", "w", stdout);
        
    int t;
    cin>>t;
    while(t--)
    {
        int n,A;
        cin>>n>>A;
        vector<int>ar;
        for(int i=0;i<n;i++){
        	int a;
        	cin>>a;
        	ar.push_back(a);
        }
        
        vector<int>ans = solve(A,ar);
        for(auto it:ans)
        	cout<<it<<" ";
        cout<<"\n";
        char ch;
        cin>>ch;
        cout<<"~\n";
    }
    return 0;
}