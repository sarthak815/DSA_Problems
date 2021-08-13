#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int cnt=0;
    vector<int> v;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    int l = v.size();
    for(int i=0;i<l-2;i++){
        int sum = v[i]+v[i+1];

        for(int j=i+2;j<l;j++){
            if(sum==v[j])
                cnt++;
            
            if(v[j]>sum)
                break;

        }
        sum=0;
    }
    cout<<cnt;
}