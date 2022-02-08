#User function Template for python3

class Solution:
    def findTwoElement( self,arr, n): 
        # code here
        dp = [False for _ in range(n+1)]
        for i in range(n):
            if(dp[arr[i]] == False):
                dp[arr[i]] = True
                
            elif(dp[arr[i]] == True):
                repeat = arr[i]
                
        del dp[0]
        
        for el in dp:
            if el == False:
                missing = dp.index(el)+1
                
        return repeat, missing

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 

    tc=int(input())
    while tc > 0:
        n=int(input())
        arr=list(map(int, input().strip().split()))
        ob = Solution()
        ans=ob.findTwoElement(arr, n)
        print(str(ans[0])+" "+str(ans[1]))
        tc=tc-1
# } Driver Code Ends