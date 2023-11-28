//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    long long solve(int arr[], int n){
    // your code here
    // jai ganesh
   map<int,int> m;
   long long int x=0,sum=0;
   for(int i=0;i<n;i++)
   {
         m[arr[i]]++;
   }
   for(auto it:m)
   {
       sum=sum+it.second;
       x+=(n-sum)*it.second;
   }
   return x;
   }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        int arr[n];
        for(int i = 0; i<n; i++)
            cin >> arr[i];
        Solution ob;
        long long ans = ob.solve(arr,n);
        cout << ans << endl;
    }
}

// } Driver Code Ends