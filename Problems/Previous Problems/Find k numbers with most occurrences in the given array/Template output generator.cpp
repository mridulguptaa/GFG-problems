#include <bits/stdc++.h> 
using namespace std; 

// comparison function defined for the priority queue 
struct compare 
{ 
    bool operator()(pair<int, int> p1, pair<int, int> p2) 
    { 
        // if frequencies of two elements are same 
        // then the larger number should come first 
        if (p1.second == p2.second) 
            return p1.first < p2.first; 
              
        // insert elements in the priority queue on the basis of 
        // decreasing order of frequencies     
        return p1.second < p2.second;     
    } 
}; 
  
// funnction to print the k numbers with most occurrences 
vector<int> print_N_mostFrequentNumber(int arr[], int n, int k) 
{ 
    // unordered_map 'um' implemented as frequency hash table 
    unordered_map<int, int> um; 
    for (int i = 0; i<n; i++) 
        um[arr[i]]++; 
      
    // store the elements of 'um' in the vector 'freq_arr'         
    vector<pair<int, int> > freq_arr(um.begin(), um.end()); 
      
    // priority queue 'pq' implemented as max heap on the basis 
    // of the comparison operator 'compare' 
    // element with the highest frequency is the root of 'pq' 
    // in case of conflicts, larger element is the root 
    priority_queue<pair<int, int>, vector<pair<int, int> >,  
                           compare> pq(um.begin(), um.end()); 
      
    // display the top k numbers 
    vector<int>ans;
    for (int i = 1; i<= k; i++) 
    { 
        int pp = pq.top().first;
        ans.push_back(pp);
        pq.pop(); 
    }             
    return ans;
} 

int main() 
{   
    freopen("input3.txt", "r", stdin);
    freopen("output3.txt", "w", stdout);
        
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        vector<int>ans = print_N_mostFrequentNumber(arr,n,k);
        for(auto it:ans) cout<<it<<" ";
        cout<<"\n";
        char ch;
        cin>>ch;
        cout<<"~\n";
    }
    return 0;
}