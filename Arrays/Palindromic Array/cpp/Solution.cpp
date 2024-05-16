
class Solution {
public:
    bool isnotpalindrome(int a){
        int t=a,res=0;
        while(t!=0){
            res=(res*10)+(t%10);
            t/=10;
        }
        return (res^a)?true:false;
    }
    int PalinArray(int a[], int n)
    {
    	for(int i=0;i<n;i++)
    	    if(isnotpalindrome(a[i]))return 0;
    	return 1;
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
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
