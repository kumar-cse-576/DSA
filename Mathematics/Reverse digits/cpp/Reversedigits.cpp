
/*
Question:
You are given an integer N, reverse the digits of given number N, ensuring that the reversed number has no leading zeroes. Return the resulting reversed number.

Example 1:
Input: 200
Output: 2
Explanation: By reversing the digts of 
number, number will change into 2.
*/


//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    long long int r=0;
		    while(n!=0){
		        r=(r*10)+(n%10);
		        n/=10;
		    }
		    return r;
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
    	long long int  ans = ob.reverse_digit(n);
    	cout << ans <<"\n";
    }
	return 0;
}
// } Driver Code Ends
