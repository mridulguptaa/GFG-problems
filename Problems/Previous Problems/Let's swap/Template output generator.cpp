#include <bits/stdc++.h> 
using namespace std; 

int solve(int n,string s,string t)
{
    vector<int> ab, ba;

    map<pair<char, char>, vector<int> > m;
    for(int i = 0; i < n; i++)
        m[{s[i], t[i]}].push_back(i);
    vector<pair<int, int> > v;
    for(int i = 0; i + 1 < m[{'a', 'b'}].size(); i += 2)
        v.push_back({m[{'a', 'b'}][i], m[{'a', 'b'}][i + 1]});
    for(int i = 0; i + 1 < m[{'b', 'a'}].size(); i += 2)
        v.push_back({m[{'b', 'a'}][i], m[{'b', 'a'}][i + 1]});
    if(m[{'a', 'b'}].size() % 2)
        ab.push_back(m[{'a', 'b'}].back());
    if(m[{'b', 'a'}].size() % 2)
        ba.push_back(m[{'b', 'a'}].back());
    if(ab.size() != ba.size())
    {
        return -1;
    }
    if(ab.size())
    {
        v.push_back({ab.back(), ab.back()});
        v.push_back({ab.back(), ba.back()});
    }
    int ans = v.size();
    return ans;
}


int main() 
{   
    freopen("input3.txt", "r", stdin);
    freopen("output3.txt", "w", stdout);
        
    int t=1;
    cin>>t;
    while(t--)
    {
        string s,t;
        int n;
        cin>>n;
        cin>>s>>t;
        cout<<solve(n,s,t);
        cout<<"\n";
        char ch;
        cin>>ch;
        cout<<"~\n";
    }
    return 0;
}