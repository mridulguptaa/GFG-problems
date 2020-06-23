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
    int n;
    n=4+rand()%99;
    cout<<n<<" "<<"\n";
    for(int i=0;i<n;i++){

      cout<<"0."<<3+rand()%100000<<" ";
    }
    cout<<"\n~ \n";
  }
  return 0;
}