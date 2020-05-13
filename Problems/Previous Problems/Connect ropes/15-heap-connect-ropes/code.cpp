#include<bits/stdc++.h> 
using namespace std; 

int ConnectRopes(vector<int>length, int n) 
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
	int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	vector<int> length(n);
    	for (int i = 0; i < n; ++i)
    		cin>>length[i];
    	cout << (connectRopes(length, n))<<"\n"; 
    }
    return 0;
} 


