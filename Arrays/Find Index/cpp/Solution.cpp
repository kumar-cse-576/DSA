class Solution
{
  public:
    vector<int> findIndex(int arr[], int n, int key)
    {
       int f=-1,e=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==key){
                if(f==-1){f=i;e=i;}
                else e=i;
            }
        }
        return {f,e};
    }
  
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}
