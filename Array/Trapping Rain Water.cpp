// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    void reverse(int *arr, int n){
        int i=0;
        int j=n-1;
        while(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    
    long long trappingWater(int arr[], int n){
        // code here
        int l=INT_MIN, r=INT_MIN;
        int left[n], right[n];
        long long count=0;
        
        for(int i=0; i<n; i++){
            left[i]=max(l, arr[i]);
            l = left[i];
            right[i]=max(r, arr[n-1-i]);
            r = right[i];
        }
        reverse(right,n);
        for(int i=0; i<n; i++){
            count += (min(left[i], right[i]) - arr[i]);
        }
        
        return count;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends