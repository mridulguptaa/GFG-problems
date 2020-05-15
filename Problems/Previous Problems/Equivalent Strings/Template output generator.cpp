#include <bits/stdc++.h> 
using namespace std; 

string ss(string a)
{
    int n = a.length();
    if(n%2) return a;
    string k = ss(a.substr(0,n/2));
    string l = ss(a.substr(n/2));
    return min(k+l,l+k);
}
void check(string s1,string s2)
{
    cout << (ss(s1)==ss(s2)?"YES":"NO")<<endl;
}

int32_t main() 
{ 
	freopen("input5.txt", "r", stdin);
    freopen("output5.txt", "w", stdout);
	int t;
	cin>>t;
	string s1,s2;
	cin>>s1>>s2;
	check(s1,s2);
	cout<<"~\n";
    return 0; 
} 