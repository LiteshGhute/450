// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long product=INT_MIN;
	    long long curr_product=1;
	    
	    //claim is that answer will be from either starting index to some index
	    //or ending index to some index
	    for(int i=0; i<n; i++){
	        curr_product *= arr[i];
	        product = max(product, curr_product);
	        if(arr[i]==0)
	            curr_product=1;
	    }
	    curr_product=1;
	    for(int i=n-1; i>0; i--){
	        curr_product *= arr[i];
	        product = max(product, curr_product);
	        if(arr[i]==0)
	            curr_product=1;
	    }
	return product;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends