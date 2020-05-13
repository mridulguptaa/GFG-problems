#include<bits/stdc++.h> 
using namespace std; 
int product_subarrays(int ar[], int n) 
{ 
	int MOD=100003;
    long long int product = 1; 
    for (int i = 0; i < n; i++) { 
    	long long int prod=1;
        for (int j = i; j < n; j++) { 
            prod =(prod*ar[j])%MOD; 
            product=(product*prod)%MOD;
        } 
    } 
    return (product+MOD)%MOD;
} 

int32_t main() 
{	
    freopen("input5.txt", "r", stdin);
    freopen("output5.txt", "w", stdout);
    	
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];
        cout<<product_subarrays(ar,n)<<"\n";
        char ch;
        cin>>ch;
        cout<<"~\n";
    }
    return 0;
} 
