//{ Driver Code Starts
// A C++ program to print elements with count more than n/k

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        // jai ganesh
       sort(arr,arr+n);
       int count=1;
       int c=0;
       int num=n/k;
       for(int i=0;i<n;i++)
       {
           if(arr[i]==arr[i+1])
           {
               count++;
               
               if(count==num+1)
               c++;
               
           }
           else
           count=1;
           
       }
       return c;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        int k;
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends