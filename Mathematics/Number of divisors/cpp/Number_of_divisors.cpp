//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		int count_divisors(int n)
		{
		    //Code here.
		    
		    int c=((int)n%3==0)?1:0;
		    for(int i=2;i<=sqrt(n);i++){
		        if(n%i==0){
		            if(i%3==0){
		                c++;
		            }
		           
		            if(i!=(n/i)&&(n/i)%3==0){
		                c++;
		            }
		        }
		    }
		    return c;
		}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	int ans = ob.count_divisors(n);
    	cout << ans << "\n";
    }
	return 0;
}
// } Driver Code Ends
