#include<bits/stdc++.h>
using namespace std;

 vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
        map<int,int> mp;
        
        int dist = 0;
        int pos = 0;
        vector<int> res;
        for(int i=0;i<k;i++){
            cout<<"dist->"<<dist<<endl;
            if(mp.find(A[i])!=mp.end()){
                mp[A[i]]++;
            }
            if(mp.find(A[i])==mp.end()){
                mp[A[i]]=1;
                dist++;
            }
           
            cout<<"check2->";
            cout<<A[i]<<"->"<<mp[A[i]]<<endl;
        }
        res.push_back(dist);
        for(int i=k;i<n;i++){
            
            cout<<"dist->"<<dist<<endl;
            if(mp[A[i]]==0){
                mp[A[i]]=1;
                dist++;
                cout<<"dist3->"<<dist<<endl;
                if(mp[A[pos]]==0)
                    dist--;
                cout<<"dist4->"<<dist<<endl;
            }

            else{
                mp[A[i]]++;
                if(mp[A[pos]]==0)
                    dist--;
            }
            cout<<"check1->";
            cout<<A[i]<<"->"<<mp[A[i]]<<endl;
            mp[A[pos]]--;
             cout<<"dist2->"<<dist<<endl;
            cout<<A[i]<<"->"<<mp[A[i]]<<endl;
            pos++;
            res.push_back(dist);
           
        }
        return res;
    }



int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int> v = countDistinct(arr,n,k);
    for(int it:v)
        cout<<it<<" ";
}