//start late kia tha 40min

vector<int> Solution::solve(int A, vector<int> &B) {
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
