
/*
Question:
Given a stream of incoming numbers, find average or mean of the stream at every point.

Example 1:
Input:
n = 5
arr[] = {10, 20, 30, 40, 50}
Output: 10.00 15.00 20.00 25.00 30.00 
Explanation: 
10 / 1 = 10.00
(10 + 20) / 2 = 15.00
(10 + 20 + 30) / 3 = 20.00
And so on.

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:	
	vector<float> streamAvg(int arr[], int n) {
	    // code here
	    vector<float> r;
	    int sm=0;
	    for(int i=0;i<n;i++){
	        sm+=arr[i];
	        r.push_back((float)sm/(float)(i+1));
	    }
	    return r;
	}
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.streamAvg(arr, n);
        cout << fixed<< setprecision(2);
        for (auto x : ans) {
            cout <<x<<" ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
