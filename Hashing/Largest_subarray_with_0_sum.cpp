#include<bits/stdc++.h>
using namespace std;

int maxLen(int A[], int n)
{
    // Your code here
    map<int,int> mp;
    int sum = 0;
    int max1 = 0;
    for(int i=0;i<n;i++){
        sum +=A[i];

        if(A[i] == 0 && max1 == 0)
            max1 = 1;
        if(sum == 0)
            max1 = i + 1;
        if(mp.find(sum)==mp.end()){
            mp.insert({sum,i});
        }
        else{
            auto it = mp.find(sum);
            int temp = i - it->second;

            if(temp>max1){
                max1 = temp;
            }
        }
    }
    return max1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<maxLen(arr,n)<<endl;
}
