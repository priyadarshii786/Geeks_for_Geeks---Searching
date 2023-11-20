//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
		// Your code goes here
		// jai gaensh
	set<int>s;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=A && arr[i]<=B) 
        s.insert(arr[i]);
    }
   if(s.size()==abs(B-A)+1)
   return true;
   
   return false;
	}
	
	
	
	
	
	/*
	
	
	bool check_elements(int arr[], int n, int A, int B)
	{
	   if(n<=B-A) return false;
	    for(int i=0;i<n;i++){
	        if(abs(arr[i])>=A && abs(arr[i])<=B){
    	        int idx=abs(arr[i])-A;
    	        if(arr[idx]>0) arr[idx]*=-1;
	        }
	    }
	    for(int i=0;i<=B-A;i++){
	        if(arr[i]>0) return false;
	    }
	    return true;
	}
	
	
	*/


		 

};
	

//{ Driver Code Starts.


int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,A,B;
		cin>>n>>A>>B;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];

        

        Solution ob;
        if (ob.check_elements(a, n, A, B))
			cout << "Yes";
		else
			cout << "No";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}







// } Driver Code Ends