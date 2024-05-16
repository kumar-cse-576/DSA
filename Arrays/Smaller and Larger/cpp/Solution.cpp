class Solution{
public:	
	vector<int> getMoreAndLess(int arr[], int n, int x) {
	    int le=0,gt=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]<=x)le++;
	        if(arr[i]>=x)gt++;
	    }
	    return {le,gt};
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMoreAndLess(arr, n, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
