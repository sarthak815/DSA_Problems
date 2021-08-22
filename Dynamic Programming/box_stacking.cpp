struct Bx
    {
        int h;
        int l;
        int w;
    };
    
    static bool comp(struct Bx a, struct Bx b){
        return (a.w*a.l>b.w*b.l)?1:0;
    }
    int maxHeight(int h[],int w[],int l[],int n)
    {
        //Your code here
        int len = n*3;
        Bx box[len];
        int idx = 0;
        
        //All combinations of box rotation
        for(int i=0;i<n;i++){
            box[idx].h = h[i];
            box[idx].l = max(w[i],l[i]);
            box[idx].w = min(w[i],l[i]);
            idx++;
            
            box[idx].h = w[i];
            box[idx].l = max(h[i],l[i]);
            box[idx].w = min(h[i],l[i]);
            idx++;
            
            box[idx].h = l[i];
            box[idx].l = max(h[i],w[i]);
            box[idx].w = min(h[i],w[i]);
            idx++;
        }
        
        sort(box, box+len, comp);
        int res[len];
        for(int i=0;i<len;i++)res[i]=box[i].h;
        
        for(int i=1;i<len;i++){
            for(int j=0;j<i;j++){
                if((box[i].l<box[j].l)&&(box[i].w<box[j].w)){
                    res[i] = max(res[i],res[j]+box[i].h);
                }
            }
        }
        
        int m = INT_MIN;
        
        for(int i=0;i<len;i++){
            if(res[i]>m){
                m = res[i];
            }
        }
        return m;
    }