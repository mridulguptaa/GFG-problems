import java.io.*;
import java.util.*; 
import java.util.PriorityQueue; 

class Solution 
{ 
    static int ConnectRopes(int length[], int n) 
	{ 
		int sum = 0; 
		PriorityQueue<Integer> pq = new PriorityQueue<>(); 

		for (int i = 0; i < n; i++) 
			pq.add(length[i]); 

		while (pq.size() > 1) 
		{ 
			int min = pq.poll(); 
			int secondMin = pq.poll(); 
			sum += (min + secondMin); 
			pq.add(min + secondMin); 
		} 
		return sum; 
	} 
} 

class GFG{
    public static void main(String args[]) throws IOException { 
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t > 0){
        	int n = sc.nextInt();
        	int[] length = new int[n];
        	for(int i=0; i<n; i++)  
        		length[i]= sc.nextInt();
            Solution ob = new Solution();
            System.out.println(ob.ConnectRopes(length,n));
            t--;
        }
    } 
} 
