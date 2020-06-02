#define pb push_back
int solve(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    set<vector<int>>ans;
    int n=A.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int k=j+1;
            int l=n-1;
            while(k<l)
            {
                if(A[i]+A[j]+A[k]+A[l]==B)
                {
                    vector<int>temp;
                    temp.pb(A[i]); temp.pb(A[j]); temp.pb(A[k]); temp.pb(A[l]);
                    ans.insert(temp);
                    l--;
                }
                else if(A[i]+A[j]+A[k]+A[l]<B) k++;
                else l--;
            }
        }
    }
    
    return (int)(ans.size());
}
