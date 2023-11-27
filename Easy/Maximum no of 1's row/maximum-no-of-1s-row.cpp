//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
            // your code here
            // jai ganesh
            
            
            //binary search on each rows, starting from last rows to row 0.
            int var;
            int ans=N-1;
            int mx=0;
            for(int j=0;j<M;j++){
                if(Mat[N-1][j]==1){
                    mx++;
                }
            }
            for(int i=N-2;i>=0;i--){
                int ind=-1;
                int l=0;
                int h=M-1;
                while(h>=l){
                    int md=(l+h)/2;
                    if(Mat[i][md]==0){
                        l=md+1;
                    }
                    else{
                        ind=md;
                        h=md-1;
                        
                    }
                }
                if(ind==-1){
                    var=0;
                }
                else{
                    var=M-ind;
                }
                if(mx<=var){
                    mx=var;
                    ans=i;
                    
                }
            }
            return ans;
        }
};

//{ Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    }
}
// } Driver Code Ends