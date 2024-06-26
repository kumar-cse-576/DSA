/*
Question:
Given an array arr[] of N integers, calculate the median.
NOTE: Return the floor value of the median.

Example 1:
Input: N = 5
arr[] = 90 100 78 89 67
Output: 89
Explanation: After sorting the array 
middle element is the median 
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
	public:
		int find_median(vector<int> v)
		{
		    sort(v.begin(),v.end());//initailly sorting the vector
		    int n=v.size();
		    if(n%2==0){
            //if length of the vector is even returning the average of middle two elemnts
		        return (v[(n/2)-1]+v[n/2])/2;
		    }
		    return (v[n/2]);// else returning the middle element
		}
};

int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
