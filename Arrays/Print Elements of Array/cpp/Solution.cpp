class Solution{
public:
	void printArray(int arr[], int n) {
	    cout<<arr[0];
	    for(int i=1;i<n;i++)
	        cout<<" "<<arr[i];
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
        ob.printArray(arr, n);
        cout << "\n";
    }
    return 0;
}
