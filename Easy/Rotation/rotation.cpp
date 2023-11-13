//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    // jai ganesh
	int left=0,right=n-1;
    while(left<right)
    {   
        int mid = left+(right-left)/2;
        if(arr[mid]>=arr[0])
        {
           left = mid+1;
        }
        else if(arr[mid]<arr[0])
        {
            right = mid;
        }
    }
    
    if(arr[left]<arr[0])
        return left;

    return 0;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends