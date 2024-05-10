
/*
Question:
Write a program to calculate nPr. nPr represents n permutation r and value of nPr is (n!) / (n-r)!.

Example 1:
Input: n = 2, r = 1
Output: 2
Explaination: 2!/(2-1)! = 2!/1! = (2*1)/1 = 2.
*/

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
