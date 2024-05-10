
/*
Question :
Given two numbers A and B. Your task is to return the sum of A and B.

Example 1:
Input:
A = 1, B = 2
Output:
3
Explanation:
Addition of 1 and 2 is 3.
*/



//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int addition(int A, int B){
        // code here 
        return A+B;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.addition(A,B) << endl;
    }
    return 0; 
} 

// } Driver Code Ends
