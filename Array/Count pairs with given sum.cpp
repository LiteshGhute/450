// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        map<int,int>m;
        int count=0;
        
        for(int i=0; i<n; i++){
            m[arr[i]]++;
        }
        for(int i=0; i<n; i++){
            int search = k - arr[i];
            if(m.find(search)!=m.end()){
                count += m[search];
            }
            if(k - arr[i] == arr[i]){ //{5,5,5,5} k=10
                count--;
            }
        }
        return count/2;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}  // } Driver Code Ends