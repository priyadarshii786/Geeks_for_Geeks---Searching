//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int firstOccurence(vector<int> &arr, int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = 0;
    int flag=0;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
            flag=1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    if(flag==0)
    {
     ans=-1;
    }
    return ans;
}


int lastOccurence(vector<int> &arr, int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = 0;
    int flag=0;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
            flag=1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
     if(flag==0)
    {
     ans=-1;
    }
    return ans;
}


    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
        // jai ganesh
        
        vector<int> ans;
        int check=firstOccurence(arr,n,x);
        if(check==-1)
        {
            ans.push_back(-1);
            return ans;
        }
        ans.push_back(firstOccurence(arr,n,x));
        ans.push_back(lastOccurence(arr,n,x));
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}

// } Driver Code Ends