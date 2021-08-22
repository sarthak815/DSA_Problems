long long int minValue(int a[], int b[], int n)
    {
        // Your code goes here
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        long long int sum = 0;
        for(int i=0;i<n;i++){
            sum+=a[i]*b[i];
        }
        return sum;
    }