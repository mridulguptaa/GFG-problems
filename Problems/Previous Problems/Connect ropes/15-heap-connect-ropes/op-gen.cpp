#include<bits/stdc++.h> 
using namespace std; 

int connect(vector<int>length, int n) 
{ 
	int sum = 0; 
	priority_queue<int, vector<int>, greater<int> > pq; 

	for(int i = 0; i < n; i++) 
		pq.push(length[i]); 

	while (pq.size() > 1) 
	{ 
		int min = pq.top(); 
		pq.pop(); 
		int secondMin = pq.top(); 
		pq.pop(); 
		sum += (min + secondMin); 
		pq.push(min + secondMin); 
	} 
	return sum; 
} 

int main() 
{	
	// freopen("corner-ip.txt", "r", stdin);
 //    freopen("corner-op.txt", "w", stdout);

    freopen("input3.txt", "r", stdin);
    freopen("output3.txt", "w", stdout);
    
	int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	vector<int> length(n);
    	for (int i = 0; i < n; ++i)
    		cin>>length[i];
    	cout << (connect(length, n))<<"\n"; 
    	char ch;
        cin>>ch;
        cout<<"~\n";
    }
    return 0;
} 


