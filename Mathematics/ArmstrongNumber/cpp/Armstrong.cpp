//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int amstrong,count=0,sum=0,r=0;
        
        amstrong=n;
       count=log10(n)+1;
    while(n>0)
    {
        r=n%10;
        sum=sum+pow(r,count);
        n=n/10;
    }
    if(amstrong==sum)
    return "Yes";
    
    return "No";
    }
    
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
