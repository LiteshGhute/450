// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
        set<int>s;
        for(int i=0; i<n; i++)
            s.insert(arr[i]);
            
        int result=0;
        int count = 1;
        int curr = *s.begin();
        for(auto el: s){
            if(el-curr == 1){
                count += 1;
            }
            else
                count = 1;
            result = max(result, count);
            curr = el;
        }
        return result;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends