inline int integer(char t){
return t-48;
}
int solve(string A) {

string two = "1";
int n = A.length();
if((A[n-1]-48)%2 != 0) return 0;
int t, carry=0;


while(two.length() <= n){
    // If power reaches the exact value
    if(two == A) return 1;
    
    int i = two.length()-1;

    carry = 0;
    while(i>=0){
        
        t = integer(two[i])*2 + carry;
        two[i] = char((t%10) + 48);
        carry = t/10;
        i--;
    }
    if(carry != 0)
        two.insert(0, to_string(carry));
        
}
return 0;
}