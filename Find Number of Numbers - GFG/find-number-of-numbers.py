# Your task is to complete this function
# Function should return an integer
def num(arr, n, k):
    # Code here
    k = str(k)
    c = 0
    for i in arr:
     for j in str(i):
       if j == k:
        c += 1
    return c


#{ 
 # Driver Code Starts
if __name__=='__main__':
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        k = int(input())
        print(num(arr, n, k))
# Contributed By: Harshit Sidhwa

# } Driver Code Ends