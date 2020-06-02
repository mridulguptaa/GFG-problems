
#include <bits/stdc++.h> 
using namespace std; 
#define pb push_back


vector<int> solve(vector<string> &B,string A) {
    vector<int>res;
    if(A.size()<B[0].size()||B.size()==0)
        return res;
    unordered_map<string,int> mp,mp2;
    for(int i=0;i<B.size();i++)
        mp[B[i]]++;
    int w=B[0].size();
    for(int i=0;i<A.size();i++)
    {
        if(mp.find(A.substr(i,w))!=mp.end())
        {
            mp2=mp;
            int j=i;
            string word=A.substr(j,w);
            while((mp2.find(word)!=mp2.end())&&(j<A.size()))
            {
                if(mp2[word]==1)
                mp2.erase(word);
                else
                mp2[word]--;
                j+=w;
                word=A.substr(j,w);
            }
            if(mp2.empty())
            res.push_back(i);
        }
    }
    return res;
}


int32_t main() 
{   
    freopen("input3.txt", "r", stdin);
    freopen("output3.txt", "w", stdout);
        
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string>ar;
        for(int i=0;i<n;i++){
            string a;
            cin>>a;
            ar.push_back(a);
        }
        string s;
        cin>>s;
        
        vector<int>ans = solve(ar,s);
        for(auto it:ans) cout<<it<<" ";
        cout<<"\n";
        char ch;
        cin>>ch;
        cout<<"~\n";
    }
    return 0;
}