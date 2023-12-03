//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int* greaterElement(int arr[], int n);

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int *b;
        b = greaterElement(arr, n);
        for(int i=0;i<n;i++){
            if(b[i] == -10000000)
                cout << "_ ";
            else
                cout << b[i] << " ";
        }
        cout<<endl;   
        
    }
    return 0;
}

// } Driver Code Ends


int* greaterElement(int arr[], int n)
{
    // Complete the function
    // jai ganesh
    
    vector<int> aux;
    for(int i=0;i<n;i++)
    aux.push_back(arr[i]);
    
    sort(aux.begin(), aux.end());
    
    unordered_map<int, int> mp;
    for(int i=0;i<n;i++)
    mp[aux[i]]=i;
    
    for(int i=0;i<n;i++)
    {
        if(mp[arr[i]]==n-1)
        arr[i]=-10000000;
        else
        arr[i]=aux[mp[arr[i]]+1];
    }
    return arr;
}
