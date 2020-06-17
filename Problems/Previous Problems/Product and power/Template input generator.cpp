#include <bits/stdc++.h>
using namespace std;

int main()
{
  freopen("input3.txt","w",stdout);
  int t;
  t=1;
  cout<<t<<endl;
  while(t--)
  {
    int n,k;
    n=111;
    k=rand()%100+1;
    cout<<n<<" "<<k<<"\n";
    for(int i=0;i<n;i++)
      cout<<2+rand()%9998<<" ";
    cout<<"\n~ \n";
  }
  return 0;
}