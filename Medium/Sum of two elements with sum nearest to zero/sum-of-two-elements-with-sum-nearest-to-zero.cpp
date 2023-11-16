//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            // your code here 
             sort(arr,arr+n);
            int start=0,end=n-1;
            int ans=arr[0]+arr[n-1];
            while(start < end)
            {
                int sum=arr[start]+arr[end];
                
                if(sum == 0)
                return 0;
                
                if(sum < 0)
                start++;
                
                else
                end--;
            
                if(abs(sum) < abs ( ans))
                ans=sum;
                
                if(abs(sum) == abs(ans))
                ans=max(ans,sum);
            }
            return ans;
        }
};

//{ Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}
// } Driver Code Ends