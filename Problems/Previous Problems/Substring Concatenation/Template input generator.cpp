#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input3.txt", "w", stdout);    
        srand(time(NULL)); 
  
    int NUM; // Number of strings in array 
  
    int LEN;    // Length of string 
  
    //for (int i=1; i<=RUN; i++) 
    { 
        NUM = 1 + rand() % 50; 
        printf("%d\n", NUM); 
        LEN = 1 + rand() % 10;
        string ans="";
        for (int k=1; k<=NUM; k++) 
        { 
             
  
            // Then print the characters of the string
            string temp =""; 
            for (int j=1; j<=LEN; j++) {
                char c = 'a' + rand() % 26;
                temp.push_back(c);
            }
            cout<<temp;  
            printf(" ");

            ans+=temp;
        } 

        int extra = rand()%5;
        for(int ii=0;ii<extra;ii++)
        {
            char c = 'a'+rand()%26;
            ans.push_back(c);
        }
        ans+=ans;
        printf("\n"); 
        cout<<ans<<"\n";
        cout<<"~\n";
    } 
    return 0;
}