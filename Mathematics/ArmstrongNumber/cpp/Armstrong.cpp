
/*
Question:
For a given 3 digit number, find whether it is armstrong number or not. An Armstrong number of three digits is a number such that the sum of the cubes of its digits is equal to the number itself. Return "Yes" if it is a armstrong number else return "No".
NOTE: 371 is an Armstrong number since 3^3 + 7^3 + 1^3 = 371

Example 1:

Input: N = 153
Output: "Yes"
Explanation: 153 is an Armstrong number
since 1^3 + 5^3 + 3^3 = 153.
Hence answer is "Yes".

*/





//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int amstrong,count=0,sum=0,r=0;
        
        amstrong=n;
       count=log10(n)+1;
    while(n>0)
    {
        r=n%10;
        sum=sum+pow(r,count);
        n=n/10;
    }
    if(amstrong==sum)
    return "Yes";
    
    return "No";
    }
    
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
