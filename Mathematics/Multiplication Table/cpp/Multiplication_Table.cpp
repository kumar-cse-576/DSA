
/*
Question:
Create the multiplication table of a given number N and return the table as an array.

Example 1:
Input:
N = 9
Output:
9 18 27 36 45 54 63 72 81 90
Explanation:
The table of 9 is the output whose 1st 
term is 9 and the 10th term is 90.
*/
//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> getTable(int N)
    {
        // Write Your Code here
        vector<int> r;
        for(int i=1;i<=10;i++){
            r.push_back(N*i);
        }
        return r;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> ans = ob.getTable(N);
        for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
