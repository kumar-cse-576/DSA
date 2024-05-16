
class Solution {
  public:
    string longest(int n, vector<string> &a) {
       string ln="";
       int l=0;
       for(int i=0;i<n;i++){
           if(a[i].length()>l){
               ln=a[i];l=a[i].length();
           }
       }
       return ln;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<string> names(n);
        Array::input(names,n);
        
        Solution obj;
        string res = obj.longest(n, names);
        
        cout<<res<<"\n";
        
    }
}
