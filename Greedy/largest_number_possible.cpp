#include<bits/stdc++.h>
using namespace std;

string findLargest(int N, int S){
        // code here
        int arr[10] = {9,8,7,6,5,4,3,2,1,0};
        int i = 0;
        long long sum = 0;
        int cnt  = 0;
        int num = 0;
        string res = "";
        if(S==0&&N>1)
            return "-1";
        while(i<10&&cnt<N){
            if(num+arr[i]>S){
                i++;
            }
            else{
                num+=arr[i];
                string s = to_string(arr[i]);
                res+=s;
                
                cnt++;
            }
        }
        if(num!=S)
            return "-1";
    
        return res;
    }

int main(){
    int N = 3;
    int S = 20;
    cout<<findLargest(48,164);
}