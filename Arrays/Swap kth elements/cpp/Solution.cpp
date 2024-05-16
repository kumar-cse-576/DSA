class Solution {
  public:
    void swapKth(int n, int k, vector<int> &a) {
        if(k<=0||k>n)return;
        int t=a[k-1];
        a[k-1]=a[n-k];
        a[n-k]=t;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        int k;
        scanf("%d",&k);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        Solution obj;
        
        obj.swapKth(n, k, arr);
        Array::print(arr);
        
    }
}
