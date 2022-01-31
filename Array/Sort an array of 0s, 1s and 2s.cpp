// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int ptr1 = 0;
        int ptr2 = 0;
        int ptr3 = n-1;
        
        for(int i=0; i<n; i++){
            if (a[ptr2]==0){
                swap(a[ptr1],a[ptr2]);
                ptr2++;
                ptr1++;
            }
            else if(a[ptr2]==1){
                ptr2++;
            }
            else if(a[ptr2]==2){
                swap(a[ptr3],a[ptr2]);
                ptr3--;
            }
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends