
/*
Question:
Given a number, reverse it and add it to itself unless it becomes a palindrome or number of iterations becomes more than 5.

Example 1:
Input: n = 23
Output: 55 
Explanation: reverse(23) = 32,then 32+23= 55 which is a palindrome. 
*/

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    bool ispal(long long n){
        string s=to_string(n);
        int i=0,sz=s.size();
        while(i<sz-i-1){
            if(s.at(i)!=s.at(sz-i-1))
                return false;
            i++;
        }
        return true;
    }
    long long isSumPalindrome(long long n){
        // code here
        
        int cnt=0;
        long long npr;
        if(ispal(n))return n;
        while(++cnt<=5){
            long long t=n,r=0;
            while(t!=0){
                r=(r*10)+(t%10);
                t/=10;
            }
            npr=n+r;
            n=npr;
            if(ispal(npr))
                return npr;
            
        }
        return -1;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution ob;
        cout<<ob.isSumPalindrome(n)<<endl;
    }
    return 0;
}

// } Driver Code Ends
