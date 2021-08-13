#include<bits/stdc++.h>
using namespace std;

bool canPair(vector<int> nums, int k) {
        // Code here.
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int rem = nums[i]%k;
            mp[rem]++;
        }
        for(auto it = mp.begin();it!=mp.end();it++){
            int p = it->first;
            cout<<"p->"<<p<<" count->"<<it->second<<endl;
            cout<<"Rem->"<<mp[k-p]<<endl;
            if(p*2==k){
                if(it->second>1)
                    return true;
                continue;
            }
            if(mp[k-p]>0)
                return true;
            if(p==0&&it->second>1)
                return true;
        }
        return false;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<canPair(arr,k)<<endl;
}