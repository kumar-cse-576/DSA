
/*
Question:
Given three integers P,R and T, denoting Principal, Rate of Interest and Time period respectively.Compute the simple Interest.

Example 1:
Input:
P=100
R=20
T=2
Output:
40.00
Explanation:
The simple interest on 100 at a rate
of 20% across 2 time periods is 40.
*/

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    double simpleInterest(int P, int R, int T) {
        // code here
        return ((double)(P*T*R)/100.00);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int P, R, T;
        cin >> P >> R >> T;
        Solution ob;
        cout << fixed << setprecision(2);
        cout << ob.simpleInterest(P, R, T) << "\n";
    }
}

// } Driver Code Ends
