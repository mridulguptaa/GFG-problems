
import heapq 
def ConnectRopes(length, n): 
	sum = 0
	pq = length
	heapq.heapify(pq) 
	
	while (len(pq) > 1) : 
		min = pq[0]; 
		heapq.heappop(pq); 
		secondMin = pq[0]; 
		heapq.heappop(pq); 
		sum += (min + secondMin); 
		heapq.heappush(pq , min + secondMin) 
	return sum


if __name__ == '__main__': 
    t = int(input())
    for _ in range(t):
        n = int(input())
        length = list(map(int, input().strip().split()))
        print(ConnectRopes(length,n))


