
/*
Question:
Given 3 numbers A, B and C. Find the greatest number among them.

Example 1:
Input: A = 10, B = 3, C = 2
Output: 10
Explanation:
10 is the greatest among the three.
*/

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int greatestOfThree(int a, int b, int c) {
        // code here
        return ((a>b)?((a>c)?a:c):((b>c)?b:c));
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B, C;
        cin >> A >> B >> C;
        Solution ob;
        cout << ob.greatestOfThree(A, B, C) << "\n";
    }
}

// } Driver Code Ends
