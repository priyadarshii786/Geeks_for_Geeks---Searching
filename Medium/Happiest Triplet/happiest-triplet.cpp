//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    vector<int> smallestDifferenceTriplet(int arr1[], int arr2[], int arr3[], int n)
    {
        //code here.
        //jai ganesh
       int i=0,j=0,k=0;
       int diff=INT_MAX,mn=INT_MAX,mx=INT_MIN;
       int a,b,c,sum=0;
       
       sort(arr1,arr1+n);
       sort(arr2,arr2+n);
       sort(arr3,arr3+n);
       
       while(i<n and j<n and k<n)
       {
           mx=max({arr1[i],arr2[j],arr3[k]});
           mn=min({arr1[i],arr2[j],arr3[k]});
           sum=arr1[i]+arr2[j]+arr3[k];
           
           if(diff>(mx-mn))
           {
               diff=mx-mn;
               a=mx;
               b=sum-mx-mn;
               c=mn;
           }
           
           if(mn==arr1[i])
           i++;
           else if(mn==arr2[j])
           j++;
           else
           k++;
       }
       
       return {a,b,c};
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],b[n],c[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		for(int i=0;i<n;++i)
			cin>>b[i];
		for(int i=0;i<n;++i)
			cin>>c[i];
		
		Solution ob;	
		vector<int> ans=ob.smallestDifferenceTriplet(a,b,c,n);
		cout<< ans[0] <<" "<<ans[1]<<" "<<ans[2] << endl;
	}
	return 0;
}

// } Driver Code Ends