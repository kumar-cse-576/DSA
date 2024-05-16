class Solution{
public:
	int sum(int arr[], int n) {
	    int r=0;
	    for(int i=0;i<n;i++)
	        r+=arr[i];
	   return r;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
