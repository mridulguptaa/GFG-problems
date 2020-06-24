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
    n=1+rand()%200;
    cout<<n<<"\n";

    for(int i=0;i<n;i++){ 
      cout<<1+rand()%1000000000<<" ";
    }
    cout<<endl;

    for(int i=0;i<n;i++){
      cout<<1+rand()%100000<<" ";
    }


    cout<<"\n~";
  }
  return 0;
}