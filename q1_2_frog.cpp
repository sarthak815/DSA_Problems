#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int prev_peak = 0;
    int curr_peak = 0;
    bool up = false;
    int max_d = 0;
    int repeat_peek = 0;
    for(int i=0;i<n-1;i++){
        int curr = arr[i];
        int next = arr[i+1];
        if(curr<=next){
            curr_peak=i+1;
            if(next==curr){
                repeat_peek++;
            }
            else{
                up = true;
                if(repeat_peek>0)
                    repeat_peek=0;
            }
        }
        else{
            if(up){
                prev_peak = curr_peak-repeat_peek;
                up = false;
                repeat_peek=0;
            }
            curr_peak = i=1;  
            
        }
        max_d = max(max_d, curr_peak-prev_peak);

    }
    cout<<max_d<<endl;

}