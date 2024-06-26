class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    vector<int> r;
	    for(int i=0;i<n;i++){
	        if(!((i+1)^arr[i]))
	            r.push_back(arr[i]);
	    }
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
        auto ans = ob.valueEqualToIndex(arr, n);
        if (ans.empty()) {
            cout << "Not Found";
        } else {
            for (int x: ans) {
                cout << x << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
