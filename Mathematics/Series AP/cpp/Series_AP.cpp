

/*
Question:
Given the first 2 terms a1 and a2 of an Arithmetic Series.Find the nth term of the series. 

Example 1:
Input:
a1 = 2
a2 = 3
n = 4
Output: 5
Explanation:
The series is: 2,3,4,5,6....
Thus,4th term is 5.
*/

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int nthTermOfAP(int a1, int a2, int n) {
        // code here
        int d=a2-a1;
        return a1+(n-1)*d;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, n;
        cin >> a1 >> a2 >> n;
        Solution ob;
        cout << ob.nthTermOfAP(a1, a2, n) << "\n";
    }
}

// } Driver Code Ends
