//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int getCandidate(int n, int k);


int main() {

    int t;
    cin >> t;
    while(t--){
    	int n, k;
    	cin >> n >> k;
    	cout << getCandidate(n, k) << endl;
    }
return 0;
}

// } Driver Code Ends


int getCandidate(int n, int k){
    //complte the function here
    //jai ganesh
    return pow(k , (int)( (log(n)/log(k)) ));

    
    
    /*
    
    --------------------- dono solution ka concept same hai ----------------------
    
    int count = 0;
    while(n)    ------------- dhyan se dekho yaha "while(n!=0)" iske kaaran mst game chl raha hai
    {
        n = n/k;
        count++;
    }
    return pow(k,count-1);
    
    */
}