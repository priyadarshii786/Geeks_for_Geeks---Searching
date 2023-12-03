//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    int findNext (int N) 
    {
        //code here.
        //jai ganesh
        string s = to_string(N); // First converted into string
        next_permutation(s.begin(), s.end());// Get the next premutation using this 
        if(stoi(s) < N) return -1; 
        // Means the number is the biggest one and the next number will be the smallest so we return -1
        return stoi(s);
    }  
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n; cin >> n;
		Solution ob;
		int res = ob.findNext (n);
		if (res == -1)
		    cout << "not possible";
		else
		    cout << res;
		cout << endl; 
	}
}
// } Driver Code Ends