
/*
Question:
Given a single integer N, your task is to find the sum of the square of the first N even natural Numbers.
 
Example 1:
Input: 2
Output: 20
Explanation: 2^2 + 4^2 = 20
*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		long long int sum_of_square_evenNumbers(long long int n)
		{
		    // Code here
		    long long int s=0,i=1;
		    while(i<=n){
		        s+=pow(2*i,2);
		        i++;
		    }
		    return s;
		}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int n;
    	cin >> n;
    	Solution ob;
    	long long int  ans = ob.sum_of_square_evenNumbers(n);
    	cout << ans <<"\n";
    }
	return 0;
}
// } Driver Code Ends
