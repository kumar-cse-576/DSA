
/*
  sorting merge sort
*/
void merge(vector<int> &a,int l,int m,int h){
    vector<int> t;
    int i=l,j=m+1;
    while(i<=m&&j<=h){
        if(a[i]<a[j])t.push_back(a[i++]);
        else t.push_back(a[j++]);
    }
    while(i<=m)t.push_back(a[i++]);
    while(j<=h)t.push_back(a[j++]);
    i=l;
    for(j=0;j<t.size();j++)a[i++]=t[j];
    
}
    void mysort(vector<int> &a,int l,int h){
        if(l==h)return;
        int mid=(l+h)/2;
        mysort(a,l,mid);
        mysort(a,mid+1,h);
        merge(a,l,mid,h);
    }
