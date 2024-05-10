
/*
Question:
Swap given two numbers and print them. (Try to do it without a temporary variable.) and return it.

Example 1:
Input: a = 13, b = 9
Output: 9 13
Explanation: after swapping itbecomes 9 and 13
*/

//{ Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    pair<int, int> get(int a, int b){
        //complete the function here
      return {b,a};
      
    }
};


//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        
        Solution ob;
        pair<int, int>p = ob.get(a, b);
        cout << p.first << ' ' << p.second << endl;
    
    }
    return 0; 
} 

// } Driver Code Ends
