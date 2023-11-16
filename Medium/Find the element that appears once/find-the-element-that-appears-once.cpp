//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int A[], int N){
	    //code
	    //jai ganesh
	    
	     if(N==1)
	     return A[0];
	     
	     int i=0,j=1;
	     
	     while(j<N && A[i]==A[j])
	     {
	         i+=2;
	         j+=2;
	         
	     }
	     
	     return A[i];

 

	    
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends