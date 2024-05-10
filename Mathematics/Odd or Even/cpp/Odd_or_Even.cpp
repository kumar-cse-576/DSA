
/*
Question:
Given a positive integer N, determine whether it is odd or even.

Example 1:
Input:
N = 1
Output:
odd
Explanation:
The output is self-
explanatory.
*/

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string oddEven(int N){
        // code here 
       return (N%2)?"odd":"even";
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.oddEven(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
