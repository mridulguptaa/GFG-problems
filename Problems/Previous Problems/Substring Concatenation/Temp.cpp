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