bool comp(struct val a, struct val b){
    return a.second<b.second;
}
int maxChainLen(struct val p[],int n)
{
//Your code here
    int arr[n] = {1};
    sort(p,p+n,comp);
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(p[j].second<p[i].first){
                arr[i] = max(arr[i],arr[j]+1);
            }
        }
    }
    int m = INT_MIN;
    for(int i=0;i<n;i++)
        if(m<arr[i])
            m = arr[i];
    return m;
    
}