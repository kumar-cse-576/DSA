#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    long long seriesSum(int n) {
        //using sum of n natural numbers formula
        return ((long)n*(long)(n+1)/2);
    }
};



int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        long long int n;
        cin>>n;
        
        Solution obj;
        long long res = obj.seriesSum(n);//calling member function through object
        
        cout<<res<<endl;
        
    }
}
