
/*
Question:
Given a number n.Find if the digit sum(or sum of digits) of n is a Palindrome number or not.
Note: A Palindrome number is a number that stays the same when reversed. Example- 121 , 131 , 7 etc.

Example 1:
Input:
n = 56
Output: 1
Explanation:
The digit sum of 56 is 5+6=11.Since, 11 is a palindrome number.Thus, answer is 1.
*/

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int n) {
        // code here
        int sm=0;
        while(n!=0){
            sm+=n%10;
            n/=10;
        }
        string s=to_string(sm);
        n=0;
        int sz=s.size();
        while(n<sz-n-1){
            if(s.at(n)!=s.at(sz-n-1)){
                return 0;
            }
            n++;
        }
        return 1;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends
