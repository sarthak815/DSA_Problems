#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    stack<int> st;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--){
        if(st.empty())
            st.push(arr[i]);
        else{
            if(arr[i]>st.top())
                st.push(arr[i]);
        }
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

}