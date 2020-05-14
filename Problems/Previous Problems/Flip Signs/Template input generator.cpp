#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input4.txt", "w", stdout);    
	srand(time(NULL));
    int t = rand()%1+1;
    cout<<t<<"\n";
    while(t--)
    {
    	int n = rand()%1000+1;
        cout<<n<<"\n";
        int sum=0;
        for (int i = 0; i < n; ++i)
        {
        	int temp= rand()%(100-sum-n-i-1)+1;
        	int sign= rand()%2;
            if(sign==1) temp=-temp;
            if(abs(sum+temp)<=10000)
            {
            	cout<<temp<<" ";
            	sum+=temp;
            }
            else
            {
            	i--;
            }
        }
        cout<<"\n";
	    cout<<"~\n";
	    cout<<"sum - "<<sum;
    }
	return 0;
}