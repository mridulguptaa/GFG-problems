Link : https://practice.geeksforgeeks.org/problem-page.php?pid=702346

Connect the Ropes

Given N ropes of different lengths, we need to tie these ropes together to make one big rope. The cost to connect two ropes is equal to sum of their lengths. Connect the ropes with minimum cost.

Input:
First line of input contains number of testcases T. For each testcase, there will be two lines, first of which will contain the value of N and second line will comtain lengths of N different ropes.

Output:
Print the minimum cost required to connect all the ropes.

Your Task:
Complete the function ConnectRopes() that takes a list of rope lengths as input parameter and returns the minimum cost of connecting them.

Constraints: 
1 <= T <= 100
1 <= N <= 10000
1 <= length <= 1000

Example:
Sample Input:
2
3
1 2 3 
4
1 4 7 10

Sample Output:
9
39

Explanation:
Testcase 1:
Connect 1 and 2. Now we have 2 resultant ropes of lengths 3,3.
Connect 3 and 3. Now we have 1 resultant ropes of lengths 6.
Minimum cost for connecting all ropes is 3+6 = 9.


