
class Solution {
  public:
    bool isPerfect(int n, vector<int> &arr) {
        for(int i=0;i<n;i++)
            if(arr[i]!=arr[n-i-1])return false;
        return true;
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        Solution obj;
        bool res = obj.isPerfect(n, arr);
        
        if (res) 
            cout<<"PERFECT"<<endl ;
        else 
            cout<<"NOT PERFECT"<<endl;
        
    }
}
