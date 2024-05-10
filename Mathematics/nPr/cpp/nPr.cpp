//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long long fact(int n){
        long long p=1;
        for(int i=2;i<=n;i++)
            p*=i;
        return p;
    }
    long long nPr(int n, int r){
        // code here
        return (fact(n)/fact(n-r));
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nPr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends
