
// CPP program to Partition an array of 
#include <bits/stdc++.h> 
using namespace std; 
  
#define lli long long int
#define INIT 0
#define INIT_SUM 0
vector<int> solve(vector<int> &A) 
{
    unordered_map<lli, lli> m;
    lli i, sum = INIT, start = INIT, elements = INIT;
    
    m[INIT_SUM] = 0;
    for(i=0; i<A.size(); i++)
    {
        sum = sum + A[i];
        
        if(m.find(sum) == m.end())
            m[sum] = i+1;
            
        else
        {
            if(elements < i+1 - m[sum])
            {
                elements = i+1 - m[sum];
                start = m[sum];
            }
        }
    }
    
    return vector<int>(A.begin()+start, A.begin()+start+elements);
}

int32_t main() 
{   
    freopen("input3.txt", "r", stdin);
    freopen("output3.txt", "w", stdout);
        
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>ar;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            ar.push_back(a);
        }
        
        vector<int>ans = solve(ar);
        for(auto it:ans)
            cout<<it<<" ";
        cout<<"\n";
        char ch;
        cin>>ch;
        cout<<"~\n";
    }
    return 0;
}