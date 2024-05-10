
/*
Question:
Given two positive integers a and b, find GCD of a and b.
Note: Don't use the inbuilt gcd function

Example 1:
Input: 
a = 3
b = 6
Output: 3
Explanation: GCD of 3 and 6 is 3
*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        int r,n=(a>b)?b:a;
        
       if(n==a){
          r=b%n;
          while(r!=0){ 
              b=n;
           n=r;
           r=b%n;
          }
        }else{
          r=a%n;
          while(r!=0){
              a=n;
           n=r;
           r=a%n;
          }
        }
       return n;
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int a;
        scanf("%d",&a);
        
        
        int b;
        scanf("%d",&b);
        
        Solution obj;
        int res = obj.gcd(a, b);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
