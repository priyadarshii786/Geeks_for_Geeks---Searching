//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    long long int sumOfDigits(int n)
        {
            long long int sum = 0;
            while(n > 0)
            {
                sum = sum + n%10;
                n = n/10;
            }
            return sum;
        }
        
        
        long long int numberCount(long long int N, long long int K)
        {
            // your code here
            // jai ganesh
            
           long long int start = 0;
           long long int end = N;
            while(start < end)
            {
                long long int mid = start + (end-start)/2;
                
                if(abs(sumOfDigits(mid)-mid) < K)
                start = mid + 1;
                
                else
                end = mid;
            }
            
            if(abs(sumOfDigits(start)-start) >= K)
            return N - start + 1;
            
            else
            return 0;
        }
    
            
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n, k;
		cin >> n >> k;
		Solution ob;
		cout <<ob.numberCount(n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends